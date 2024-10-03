#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

class ScalarConverter{
    public:
        static void convert(std::string toconv);
    
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &cpy);
        ~ScalarConverter();
        ScalarConverter const &operator=(ScalarConverter const &cpy);
};

#endif