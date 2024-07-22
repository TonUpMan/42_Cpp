
#include "Zombie.hpp"

int main(){

    Zombie *bob;
    int     N;

    N = 10;
    bob = zombieHorde(N, "bob");
    for(int i = 0; i < N; i++){
        bob[i].announce();
    }    
    delete[] bob;
    return (0);
}