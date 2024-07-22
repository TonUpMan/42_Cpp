
#include "Harl.hpp"

int main(int ac, char **av){
    
    Harl        harl;

    if(ac == 2)
        harl.complain(av[1]);
    else
        std::cout << "you didn't listen to me, only one argument" << std::endl;

    return (0);
}