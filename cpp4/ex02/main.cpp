#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

int main(){

    Animal *a[6];
    std::cout << "//////////////////// creation \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < 6; i++){
        if(i % 2)
            a[i] = new Cat();
        else
            a[i] = new Dog();
    }
    std::cout << std::endl;
    std::cout << "//////////////////// copy && depth \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    std::cout << "////////// copy \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    Cat *cat = new Cat();
    Cat *copy = new Cat(*cat);
    std::cout << cat->getType() << std::endl;
    std::cout << copy->getType() << std::endl;
    std::cout << std::endl;
    std::cout << "////////// set idea's copy \\\\\\\\\\\\\\\\\\\\" << std::endl;
    copy->setIdea(1, "am I a copy?");
    std::cout << std::endl;
    std::cout << "////////// original's copy \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < 5; i++)
        std::cout << cat->getIdea(i) << std::endl;
    std::cout << std::endl;
    std::cout << "////////// idea's copy \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < 5; i++)
        std::cout << copy->getIdea(i) << std::endl;
    std::cout << std::endl;
    delete cat;
    delete copy;
    std::cout << std::endl;
    std::cout << "//////////////////// sound & delete \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < 6; i++){
        a[i]->makeSound();
        delete a[i];
        std::cout << std::endl;
    }
}