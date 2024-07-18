
#include "Zombie.hpp"

Zombie* newZombie(std::string name){

    Zombie *result;

    result = new Zombie();
    if(name.empty())
        name ="New";
    result->set_name(name);
    return (result);
}