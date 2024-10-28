#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    (void)av;
    if(ac == 1){
        try{
            BitcoinExchange();
        }
        catch(std::exception &e){
            return(0);
        }
    }
    else{
        std::cout << "error: number of argument" << std::endl;
        return(0);
    }
    return(1);
}