
#include "Zombie.hpp"

void randomChump(std::string name){

    Zombie result;
    if(name.empty())
        name = "Chump";
    result.set_name(name);
    result.announce();
}