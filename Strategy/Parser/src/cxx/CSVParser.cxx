#include "CSVParser.hxx"
#include "DataSet.hxx"


#include <fstream>
#include <iostream>
#include <sstream>


void CSVParser::parse(std::string input_file, DataSet &dataset)
{
	try
	{
	    std::ifstream csvFile(input_file);

	    if(csvFile.is_open())
	    {
	    	//
	    	std::string line;
	    	while(std::getline(csvFile, line))
	    	{
	    		std::string term;
	    		std::stringstream ss(line);
	    		while(getline(ss, term, ','))
	    		{
	    			dataset.add(term);
	    		}
	    	}
	    }
	    else
	    {
	    	throw std::runtime_error("Cannot open the file");
	    }
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		exit(0);
	}
}