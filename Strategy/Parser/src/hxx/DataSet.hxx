#ifndef __DATASET__
#define __DATASET__

#include "ParserStrategy.hxx"

#include <string>
#include <vector>

class DataSet
{
    private:
        ParserStrategy* parser_strategy_;
        std::vector<std::string> m_dataset;

    public:
        void set_parser_strategy(ParserStrategy* parser_strategy);

        void fill_from_file(std::string input_file);

        // autres méthodes de la classe DataSet
        void add(std::string s);
};

#endif