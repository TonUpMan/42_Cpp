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
    int a = 0;
    int f = 0;
    int pt = 0;
    for(int i = 0; i < (int)arg.length(); i++){
        if(!isdigit(arg[i]))
            a++;
        if(arg[i] == 'f')
            f++;
        if(arg[i] == '.' || arg[i] == '-')
            pt++;
    }
    if((a - (f + pt) != 0 && arg.length() > 1) || (f > 1) || (pt > 2)){
        std::cout << "argument is no correct"<< std::endl;
        return(1);
    }
    return(0);
}

void    tochar(std::string arg){
    if(arg.length() > 1 || (arg.length() == 1 && isdigit(arg[0]))){
        double a = strtod(arg.c_str(), NULL);
        if(a > 31 && a < 127)
            std::cout << "char: \'" << static_cast<char>(a) << "\'" << std::endl;
        else
            std::cout << "char: non displayable" << std::endl;
    }
    else
        std::cout << "char: \'" << arg << "\'" << std::endl;
        
}

void    toint(std::string arg){
    if(arg.length() == 1 && !isdigit(arg[0]))
        std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
    else{
        double a = std::strtod(arg.c_str(), NULL);
        if(a <= INT_MAX && a >= INT_MIN)
            std::cout << "int: " << static_cast<int>(a) << std::endl;
        else    
            std::cout << "int: impossible" << std::endl;
    }
}

void    tofloat(std::string arg){
    if(arg.length() == 1 && !isdigit(arg[0]))
        std::cout << "float: " << static_cast<float>(arg[0]) << "f" << std::endl;
    else{
        double a = std::strtof(arg.c_str(), NULL);
        std::cout << "float: " << static_cast<float>(a) << "f" << std::endl;
    }
}

void    todouble(std::string arg){
    if(arg.length() == 1 && !isdigit(arg[0]))
        std::cout << "float: " << static_cast<float>(arg[0]) << "f" << std::endl;
    else{
        double a = std::strtod(arg.c_str(), NULL);
        std::cout << "double: " << static_cast<float>(a) << std::endl;
    }
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