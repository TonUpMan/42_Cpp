
#include "Harl.hpp"

Harl::Harl(void){}
Harl::~Harl(void){}

void Harl::complain(std::string level){

    int     i = 0;
    std::string lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*fct[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    while(i < 4)
    {
        if(lvl[i] == level)
            break ;
        i++;
    }
    switch(i)
    {
        case 0:
            (this->*fct[0])();
            // Fall through
        case 1:
            (this->*fct[1])();
            // Fall through
        case 2:
            (this->*fct[2])();
            // Fall through
        case 3:    
            (this->*fct[3])();
            break;
        case 4:
            std::cout << "[NO FILTER]" << std::endl;
            std::cout << "Without a selected filter, this can be dangerous!" << std::endl;
    }
}

void Harl::debug(void){
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void){
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!";
    std::cout << " If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void){
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void){
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}