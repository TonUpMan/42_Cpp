
#include "sed.hpp"

void    error_handle(void){

    std::cout << "something was wrong" << std::endl;
    exit(0);
}

int is_file(char *file){

    
}

int handle_input(int ac, char **av){

    int i;

    if(!is_file(av[1]))
        error_handle();
    for(i = 2; i < ac; i++){

    }
}

int main(int ac, char **av){

    if(ac != 4){
        handle_input(ac, av);
    }    
    return (0);
}