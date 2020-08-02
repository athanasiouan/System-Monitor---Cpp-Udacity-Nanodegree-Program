#include "processor.h"


Processor::Processor(){
  tAll_ = LinuxParser::Jiffies();
  tIdle_ = LinuxParser::IdleJiffies();
}

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
	float tAllOld = tAll_;
  	float tIdleOld = tIdle_;
  	tAll_ = LinuxParser::Jiffies();
  	tIdle_ = LinuxParser::IdleJiffies();
  
  	float rValue = (((tAll_ - tAllOld) - (tIdle_ - tIdleOld)) / (tAll_ - tAllOld));
  	if (rValue > 0.0) {
      	return rValue;
    }
  	return 0.0;
}