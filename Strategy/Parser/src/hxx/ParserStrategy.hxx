// Interface ParserStrategy

#ifndef __PARSERSTRATEGY__
#define __PARSERSTRATEGY__

#include <string>

class DataSet;


class ParserStrategy
{
    public:
        // La methode parse sera definit dans d'autres fichiers sources.
        virtual void parse(std::string input_file, DataSet& dataset) = 0;
};

#endif