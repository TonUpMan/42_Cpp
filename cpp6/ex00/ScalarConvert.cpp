#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert(){}
ScalarConvert::ScalarConvert(ScalarConvert const &){}
ScalarConvert::~ScalarConvert(){}
ScalarConvert const &ScalarConvert::operator=(ScalarConvert const &){return(*this);}

int handle_science(std::string arg){
    if(arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "+inff" || arg == "-inff" || arg == "nanf"){
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if(arg == "+inf" || arg == "-inf" || arg == "nan")
            std::cout << "float: " << arg + "f" << std::endl;
        else
            std::cout << "float: " << arg << std::endl;
        if(arg == "+inff" || arg == "-inff" || arg == "nanf")
            arg.erase(arg.length() - 1);
        std::cout << "double: " << arg << std::endl;
        return (1);
    }
    return(0);
}

int parser(std::string arg){
    if(arg.length() > 1){
        int a = 0;
        for(int i = 0; i < (int)arg.length(); i++){
            if(!isdigit(arg[i]))
                a++;
        }
        if(a > 1)
            std::cout << "no correct argument"<< std::endl;
        return(1);
    }
    return(0);
}

void    tochar(std::string arg){
    if(arg.length() > 1){
        double a = strtod(arg.c_str(), NULL);
        if(a > 31 && a < 127)
            std::cout << "char: \'" << static_cast<char>(a) << "\'" << std::endl;
        else
            std::cout << "char: non displayable" << std::endl;
    }
    else
        std::cout << "char: \'" << static_cast<char>(arg[0]) << "\'" << std::endl;
        
}

void    toint(std::string arg){
    char *endptr;
    double a = std::strtod(arg.c_str(), &endptr);
    if(a)
        std::cout << "int: " << static_cast<int>(a) << std::endl;
    else
        std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
}

void    tofloat(std::string arg){
    double a = std::strtod(arg.c_str(), NULL);
    std::cout << "float: " << static_cast<float>(a) << "f" << std::endl;
}

void    todouble(std::string arg){
    double a = std::strtod(arg.c_str(), NULL);
    std::cout << "double: " << static_cast<float>(a) << std::endl;
}

void    ScalarConvert::convert(std::string arg){

    if(arg.empty())
        std::cout << "no value to convert" << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    if(handle_science(arg))
        return ;
    if(parser(arg))
        return ;
    tochar(arg);
    toint(arg);
    tofloat(arg);
    todouble(arg);
}