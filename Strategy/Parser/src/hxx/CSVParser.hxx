#ifndef __CSVParser__
#define __CSVParser__

#include "ParserStrategy.hxx"

class CSVParser : public ParserStrategy
{
    public:
    	void parse(std::string input_file, DataSet &dataset) override;
};

#endif