#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "////////// instancing \\\\\\\\\\\\\\\\\\\\" << std::endl;
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << "////////// wrong instancing \\\\\\\\\\\\\\\\\\\\" << std::endl;
    const WrongAnimal* test = new WrongAnimal();
    const WrongAnimal* testcat = new WrongCat();
    
    std::cout << "////////// get type \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << test->getType() << " " << std::endl;
    std::cout << testcat->getType() << " " << std::endl;

    std::cout << "////////// sound \\\\\\\\\\\\\\\\\\\\" << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    test->makeSound();
    testcat->makeSound();

    std::cout << "////////// delete \\\\\\\\\\\\\\\\\\\\" << std::endl;
    delete meta;
    delete i;
    delete j;
    delete test;
    delete testcat;

    return 0;
}