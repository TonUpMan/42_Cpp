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
    std::cout << "////////// brain && thing \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    Cat *cat = new Cat();
    for(int i = 0; i < 5; i++)
        std::cout << cat->getIdea(i) << std::endl;
    delete cat;
    std::cout << std::endl;
    Dog *dog = new Dog();
    for(int i = 0; i < 5; i++)
        std::cout << dog->getIdea(i) << std::endl;
    delete dog;
    std::cout << std::endl;
    std::cout << "////////// sound & delete \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < 6; i++){
        a[i]->makeSound();
        delete a[i];
        std::cout << std::endl;
    }
}