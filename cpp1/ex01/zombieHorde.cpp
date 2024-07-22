
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

    Zombie *result;

    if (N <= 0)
        return (0);
    if(name.empty())
        name ="Horde";
    result = new Zombie[N];
    for(int i = 0; i < N; i++){
        result[i].set_name(name);
    }
    return (result);
}