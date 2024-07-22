
#include "Harl.hpp"

int main(void){
    
    std::string input;
    Harl        harl;

    std::cout << "choose a level: DEBUG, INFO, WARNING, ERROR" << std::endl;
    if(!getline(std::cin, input))
        return (0);
    harl.complain(input);
    return (0);
}