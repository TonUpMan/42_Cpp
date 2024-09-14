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
    const WrongAnimal* Wcat = new WrongCat();
    
    std::cout << "////////// get type \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << "meta(animal) = ";
    std::cout << meta->getType() << " " << std::endl;
    std::cout << "i(cat) = ";
    std::cout << i->getType() << " " << std::endl;
    std::cout << "j(dog) = ";
    std::cout << j->getType() << " " << std::endl;
    std::cout << "test(Wanimal) = ";
    std::cout << test->getType() << " " << std::endl;
    std::cout << "Wcat(Wcat) = ";
    std::cout << Wcat->getType() << " " << std::endl;

    std::cout << "////////// sound \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << "meta's sound(animal) = ";
    meta->makeSound();
    std::cout << "i's sound(cat) = ";
    i->makeSound();
    std::cout << "j's sound(dog) = ";
    j->makeSound();
    std::cout << "test's sound(Wanimal) = ";
    test->makeSound();
    std::cout << "Wcat's sound(Wanimal) = ";
    Wcat->makeSound();

    std::cout << "////////// delete \\\\\\\\\\\\\\\\\\\\" << std::endl;
    delete meta;
    delete i;
    delete j;
    delete test;
    delete Wcat;

    return 0;
}