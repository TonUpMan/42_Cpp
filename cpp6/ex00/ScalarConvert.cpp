#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert(){}
ScalarConvert::ScalarConvert(ScalarConvert const &){}
ScalarConvert::~ScalarConvert(){}
ScalarConvert const &ScalarConvert::operator=(ScalarConvert const &){return(*this);}

void    tochar(std::string arg){
    if(arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "+inff" || arg == "-inff" || arg == "nanf"){
        std::cout << "char: impossible" << std::endl;
        return ;
    }
    if(isdigit(arg[0])){
        char *endptr;
        long a = std::strtol(arg.c_str(), &endptr, 10);
        if(a >= 32 && a < 127)
            std::cout << "char: \'" << static_cast<char>(a) << "\'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else if(arg.length() == 1)
        std::cout << "char: \'" << arg << "\'" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
}

void    toint(std::string arg){
    if(arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "+inff" || arg == "-inff" || arg == "nanf"){
        std::cout << "int: impossible" << std::endl;
        return ;
    }
    if(isdigit(arg[0])){
        char *endptr;
        long a = std::strtol(arg.c_str(), &endptr, 10);
        std::cout << "int: " << a << std::endl;
    }
    else
        std::cout << "int: " << static_cast<int>(arg[0]) <<std::endl;
}

void    tofloat(std::string arg){
    if(arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "+inff" || arg == "-inff" || arg == "nanf"){
        if(arg == "+inf" || arg == "-inf" || arg == "nan")
            std::cout << "float: " << arg + "f" << std::endl;
        else
            std::cout << "float: " << arg << std::endl;
        return ;
    }
    if(isdigit(arg[0])){
        char *endptr;
        long a = std::strtol(arg.c_str(), &endptr, 10);
        std::cout << "float: " << static_cast<float>(a) << std::endl;
    }
    else
        std::cout << "float: " << static_cast<float>(arg[0]) << std::endl;
}

void    todouble(std::string arg){
    if(arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "+inff" || arg == "-inff" || arg == "nanf"){
        if(arg == "+inff" || arg == "-inff" || arg == "nanf"){
            arg.erase(arg.length() - 1);
        }
            std::cout << "double: " << arg << std::endl;
        return ;
    }
}

void    ScalarConvert::convert(std::string arg){

    if(arg.empty())
        std::cout << "no value to convert" << std::endl;
    tochar(arg);
    toint(arg);
    tofloat(arg);
    todouble(arg);
}