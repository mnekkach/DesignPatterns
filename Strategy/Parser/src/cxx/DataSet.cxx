#include "DataSet.hxx"
#include "ParserStrategy.hxx" //Interface


void DataSet::set_parser_strategy(ParserStrategy* parser_strategy)
{
	parser_strategy_ = parser_strategy;
}


void DataSet::fill_from_file(std::string input_file)
{
	parser_strategy_->parse(input_file, *this);
}


// autres méthodes de la classe DataSet

void DataSet::add(std::string str)
{
	m_dataset.push_back(str);
}