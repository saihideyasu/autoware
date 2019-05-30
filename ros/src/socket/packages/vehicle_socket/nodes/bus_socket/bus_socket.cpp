#include <ros/ros.h>
#include <thread>
#include "canif.hpp"
#include "estima.hpp"

class SocketClass
{
private:
	ros::NodeHandle nh_, private_nh_;
	AutowareCanInterface canif;
	EstimaCanData estima_status;

	std::thread *thread_receive_;
	bool running_ = true;

	void can_receive_thread()
	{
		ros::Rate loop_rate(50); // CAN frame: 20ms
		while(running_)
		{
			can_frame frame;
			int length;
			while(length = canif.receive(&frame), length != -1) // Non-blocking read
			{
				if(length == sizeof(can_frame))
				{
					if(!load_frame(estima_status, frame))
					{
						ROS_INFO("Unknown CAN ID: %d", frame.can_id);
					}
				}
				else
				{
					ROS_INFO("Receive %d bytes", length);
				}
			}
			loop_rate.sleep();
		}
	}
public:
	SocketClass(ros::NodeHandle nh, ros::NodeHandle p_nh)
	    : nh_(nh)
	    , private_nh_(p_nh)
	{
		std::string device;
		double timeout;
		bool timeout_disabled, autodrive;
		private_nh_.param<std::string>("device", device, "can0");
		private_nh_.param<double>("timeout", timeout, 1.0);
		private_nh_.param<bool>("timeout_disabled", timeout_disabled, false);
		private_nh_.param<bool>("autodrive", autodrive, false);

		if(!canif.init(device))
		{
			std::cerr << canif.error() << std::endl;
			throw std::string("SocketClass return");
		}
		std::cout << "device open : " << device << std::endl;

		thread_receive_ = new std::thread(&SocketClass::can_receive_thread, this);
	}

	~SocketClass()
	{
		running_ = false;
		thread_receive_->join();
		delete thread_receive_;
	}
};

int main(int argc, char** argv)
{
	ros::init(argc, argv, "bus_can_interface");
	ros::NodeHandle nh;
	ros::NodeHandle private_nh("~");

	try {
		SocketClass socketclass(nh, private_nh);

		ros::Rate rate(10);
		while(ros::ok())
		{

		}
	}
	catch(std::string error)
	{
		std::cout << error << std::endl;
		return 0;
	}

	return 0;

}
