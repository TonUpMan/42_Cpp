#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

int main(){

    Animal *a[6];
    std::cout << "////////// creation \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < 6; i++){
        if(i % 2)
            a[i] = new Cat();
        else
            a[i] = new Dog();
    }
    std::cout << std::endl;
    std::cout << "////////// sound & delete \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < 6; i++){
        a[i]->makeSound();
        delete a[i];
        std::cout << std::endl;
    }
}