#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    std::cout << "/////////// Creation MateriaSource \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    IMateriaSource* src = new MateriaSource();
    IMateriaSource* ice = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ice->learnMateria(new Ice());
    std::cout << std::endl;

    std::cout << "/////////// Creation Character \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    ICharacter* me = new Character("me");
    ICharacter* you = new Character("you");
    ICharacter* bob = new Character("bob");
    Character*  regis = new Character("regis");
    Character* paul = new Character("paul");
    Character   copy(*regis);
    Character* operat = new Character("operat");
    *operat = *paul;
    std::cout << operat->getName() << std::endl;
    std::cout << std::endl;

    std::cout << "/////////// Copy test \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    AMateria* tmp;
    AMateria* test;
    tmp = src->createMateria("cure");
    test = ice->createMateria("ice");
    std::cout << "/////////// Regis equip \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    regis->equip(test);
    std::cout << std::endl;
    std::cout << "/////////// Copy use \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    copy.use(0, *me);
    std::cout << std::endl;
    std::cout << "/////////// Regis use \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    regis->use(0, *me);
    std::cout << std::endl;
    std::cout << "/////////// Operat equip \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    operat->equip(tmp);
    std::cout << std::endl;
    std::cout << "/////////// Paul use \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    paul->use(0, *bob);
    std::cout << std::endl;
    std::cout << "/////////// Operat use \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    operat->use(0, *bob);
    std::cout << std::endl;

    std::cout << "/////////// Action \\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    test = ice->createMateria("cure");
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    you->equip(tmp);
    me->use(0, *bob);
    me->use(1, *bob);
    you->use(0, *bob);
    std::cout << std::endl;
    std::cout << "/////////// End \\\\\\\\\\\\\\\\\\\\" << std::endl;
    delete src;
    delete ice;
    delete bob;
    delete me;
    delete you;
    return 0;
}