#include <iostream>
#include "ClassA.hpp"
#include "Logger.hpp"




int main(int argc, char const *argv[])
{
	std::cout << "Hello World !" << std::endl;

	ClassA myClassA;

	Logger *myLoger = myClassA.m_logger;

	myLoger->Log();

	return 0;
}