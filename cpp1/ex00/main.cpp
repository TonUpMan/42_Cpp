
#include "Zombie.hpp"

int main(){

    Zombie *bob;
    
    bob = newZombie("arthur");
    randomChump("brice");
    bob->announce();
    delete(bob);
    return (0);
}