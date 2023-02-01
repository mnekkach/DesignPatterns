#include "Logger.hpp"
#include <iostream>

Logger::Logger() {}

Logger::~Logger() {}

void Logger::Log()
{
	std::cout << "I am in Logger !" << std::endl;
}