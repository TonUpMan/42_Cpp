
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
        {
            (this->*fct[i])();
            return ;
        }
        i++;
    }
    std::cout << "i said CHOOSE level" << std::endl; 
}

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}