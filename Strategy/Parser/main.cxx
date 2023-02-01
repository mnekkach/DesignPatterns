#include "DataSet.hxx"
#include "CSVParser.hxx"



int main()
{
	DataSet dataset;

	std::string input_file = "data.csv";

	dataset.set_parser_strategy(new CSVParser());

	dataset.fill_from_file(input_file);

	return 0;
}