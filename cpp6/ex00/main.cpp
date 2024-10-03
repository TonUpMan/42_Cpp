#include "ScalarConvert.hpp"

int main(int ac, char**av){

    if(ac == 2){
        std::string arg = av[1];
        ScalarConvert::convert(arg);
    }
    else{
        std::cout << "error: incorrect number of argument" << std::endl;
    }
}