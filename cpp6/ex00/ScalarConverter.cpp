#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter const &cpy){*this = cpy;}
ScalarConverter::~ScalarConverter(){}
ScalarConverter const &ScalarConverter::operator=(ScalarConverter const &cpy){return (*this);}

void    tochar(std::string arg){
    if(arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "+inff" || arg == "-inff" || arg == "nanf"){
        std::cout << "char: impossible" << std::endl;
        return ;
    }
}

void    toint(std::string arg){
    if(arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "+inff" || arg == "-inff" || arg == "nanf"){
        std::cout << "int: impossible" << std::endl;
        return ;
    }
}

void    tofloat(std::string arg){
    if(arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "+inff" || arg == "-inff" || arg == "nanf"){
        if(arg == "+inf" || arg == "-inf" || arg == "nan"){
            std::cout << "float: " << arg + "f" << std::endl;
            return ;
        }
        else
            std::cout << "float: " << arg << std::endl;
    }
}

void    todouble(std::string arg){
    if(arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "+inff" || arg == "-inff" || arg == "nanf"){
        if(arg == "+inf" || arg == "-inf" || arg == "nan"){
            std::cout << "float: " << arg + "f" << std::endl;
            return ;
        }
        else
            std::cout << "float: " << arg << std::endl;
    }
}

void    ScalarConverter::convert(std::string toconv){

    if(toconv.empty())
        return;
    tochar(toconv);
    toint(toconv);
    tofloat(toconv);
    todouble(toconv);
}