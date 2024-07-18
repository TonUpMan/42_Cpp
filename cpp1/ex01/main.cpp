
#include "Zombie.hpp"

int main(){

    Zombie *bob;
    int     N;
    int     i;

    N = 10;
    bob = zombieHorde(N, "bob");
    for(i = 0; i < N; i++){
        bob[i].announce();
    }    
    delete[] bob;
    return (0);
}