#include <ros/ros.h>
#include <std_msgs/String.h>
#include <geometry_msgs/PoseStamped.h>
#include <tf/tf.h>
#include <tf/transform_listener.h>
#include <tf/transform_datatypes.h>
#include <tf_conversions/tf_eigen.h>

struct DiffSum
{
    double x_, y_, z_;
    double yaw_sin_, yaw_cos_, pitch_sin_, pitch_cos_, roll_sin_, roll_cos_;
    unsigned int count_;

    void zero()
    {
        x_ = y_ = z_ = yaw_sin_ = yaw_cos_ = pitch_sin_ = pitch_cos_ = roll_sin_ = roll_cos_ = 0;
        count_ = 0;
    }
};

class LidarGnssCalibrator
{
private:
    ros::NodeHandle nh_, private_nh_;
    ros::Subscriber sub_lidar_localizer_, sub_gnss_localizer_;
    ros::Publisher pub_pose_diff_;

    tf::TransformListener listener_;
    tf::StampedTransform ndt_tf_, gnss_tf_;

    geometry_msgs::PoseStamped ndt_pose_, gnss_pose_;
    bool ndt_read, gnss_read_;
    DiffSum diff_sum_;

    void callbackNdtPose(const geometry_msgs::PoseStamped &pose)
    {
        ndt_pose_ = pose;
        ndt_read = true;
        listener_.waitForTransform("ndt_base_link", "rtk_base_link",
                                   ros::Time::now(), ros::Duration(1.0));
        listener_.lookupTransform("ndt_base_link", "rtk_base_link", ros::Time(0), ndt_tf_);
        std::cout << "a: " << pose.pose.position.x << "," << pose.pose.position.y << "," << pose.pose.position.z << std::endl;
        std::cout << "b: " << ndt_tf_.getOrigin().getX() << "," << ndt_tf_.getOrigin().getY() << "," << ndt_tf_.getOrigin().getZ() << std::endl;
    }

    void callbackGnssPose(const geometry_msgs::PoseStamped &pose)
    {
        gnss_pose_ = pose;
        gnss_read_ = true;
    }
public:
    LidarGnssCalibrator(ros::NodeHandle nh, ros::NodeHandle p_nh)
        : nh_(nh)
        , private_nh_(p_nh)
        , ndt_read(false)
        , gnss_read_(false)
    {
        sub_lidar_localizer_ = nh_.subscribe("/ndt_pose", 1, &LidarGnssCalibrator::callbackNdtPose, this);
        sub_gnss_localizer_ = nh_.subscribe("/RTK_gnss_pose", 1, &LidarGnssCalibrator::callbackGnssPose, this);
        pub_pose_diff_ = nh_.advertise<std_msgs::String>("/localizer_diff", 1);

        diff_sum_.zero();
    }

    void calibrator()
    {


        if(ndt_read == true && gnss_read_ == true)
        {

            tf::Pose tf_ndt_pose, tf_gnss_pose, tf_diff;
            tf::poseMsgToTF(ndt_pose_.pose, tf_ndt_pose);
            tf::poseMsgToTF(gnss_pose_.pose, tf_gnss_pose);
            tf_diff.setRotation(tf_gnss_pose.getRotation() * tf_ndt_pose.getRotation().inverse());
            tf_diff.setOrigin(tf_ndt_pose.getOrigin() - tf_gnss_pose.getOrigin());

            tf::Point diff_point = tf_diff.getOrigin();
            diff_sum_.x_ += diff_point.getX();  diff_sum_.y_ += diff_point.getY();  diff_sum_.z_ += diff_point.getZ();
            tf::Matrix3x3 diff_rot;
            diff_rot = tf_diff.getBasis();
            double roll, pitch, yaw;
            diff_rot.getRPY(roll, pitch, yaw);
            diff_sum_.yaw_sin_ += sin(yaw);  diff_sum_.yaw_cos_ += cos(yaw);
            diff_sum_.pitch_sin_ += sin(pitch);  diff_sum_.pitch_cos_ += cos(pitch);
            diff_sum_.roll_sin_ += sin(roll);  diff_sum_.roll_cos_ += cos(roll);
            diff_sum_.count_++;

            std::stringstream str;
            str << "x," << diff_sum_.x_/diff_sum_.count_ << " y," << diff_sum_.y_/diff_sum_.count_ << " z," << diff_sum_.z_/diff_sum_.count_;
            double ave_yaw = atan2(diff_sum_.yaw_sin_/diff_sum_.count_, diff_sum_.yaw_cos_/diff_sum_.count_);
            double ave_pitch = atan2(diff_sum_.pitch_sin_/diff_sum_.count_, diff_sum_.pitch_cos_/diff_sum_.count_);
            double ave_roll = atan2(diff_sum_.roll_sin_/diff_sum_.count_, diff_sum_.roll_cos_/diff_sum_.count_);
            str << " yaw," << ave_yaw << " pitch," << ave_pitch << " roll," << ave_roll;
            std_msgs::String ret;
            ret.data = str.str();
            pub_pose_diff_.publish(ret);
        }
    }
};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "lidar_gnss_calibrator");
    ros::NodeHandle nh, private_nh_("~");

    LidarGnssCalibrator lgl(nh, private_nh_);

    ros::Rate rate(30);
    while(ros::ok())
    {
        ros::spinOnce();
        lgl.calibrator();
        rate.sleep();
    }

    return 0;
}