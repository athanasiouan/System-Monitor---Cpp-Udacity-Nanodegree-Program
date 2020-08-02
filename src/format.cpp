#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long sec) { 
	long seconds = sec % 60;
  	long minutes = (sec / 60) % 60;
  	long hours = sec / 3600;
  
  	std::stringstream result;
  
  	result << std::setfill('0') << std::setw(2) << hours << ":";
  	result << std::setfill('0') << std::setw(2) << minutes << ":";
  	result << std::setfill('0') << std::setw(2) << seconds << ":";
  
  	return result.str();
}