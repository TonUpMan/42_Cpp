#include "ScalarConverter.hpp"

int main(int ac, char **av){
    if(ac == 2){
        std::string toconv = av[1];
        ScalarConverter::convert(toconv);
    }
    return(0);
}