#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>


int main(){

    {
        std::cout << "/////////////// ShrubberyCreation \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            AForm *a = new ShrubberyCreationForm ("pierre");
            std::cout << std::endl;
            std::cout << *a << std::endl;
            Bureaucrat A("Alex", 1);
            std::cout << A << std::endl;
            std::cout << std::endl;
            A.signForm(*a);
            std::cout << std::endl;
            A.executeForm(*a);
            delete a;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
            std::cout << std::endl;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "/////////////// PresidentialPardon \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            AForm *b = new PresidentialPardonForm("paul");
            std::cout << std::endl;
            std::cout << *b << std::endl;
            Bureaucrat B("Ben", 5);
            std::cout << B << std::endl;
            std::cout << std::endl;
            B.signForm(*b);
            std::cout << std::endl;
            B.executeForm(*b);
            delete b;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
            std::cout << std::endl;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "/////////////// RobotomyRequest \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            srand(time(0));
            AForm *c = new RobotomyRequestForm ("jacque");
            std::cout << std::endl;
            std::cout << *c << std::endl;
            Bureaucrat C("Coco", 5);
            std::cout << C << std::endl;
            std::cout << std::endl;
            C.signForm(*c);
            std::cout << std::endl;
            for(int i = 0; i < 4; i++){
                C.executeForm(*c);
            }
            delete c;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
            std::cout << std::endl;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "/////////////// Bad grade for sign \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            AForm *d = new PresidentialPardonForm("bernard");
            std::cout << std::endl;
            std::cout << *d << std::endl;
            Bureaucrat D("Dam", 150);
            std::cout << D << std::endl;
            std::cout << std::endl;
            D.signForm(*d);
            D.executeForm(*d); 
            std::cout << std::endl;
            delete d;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
            std::cout << std::endl;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "/////////////// Bad grade for execute \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            AForm *e = new PresidentialPardonForm("remi");
            std::cout << std::endl;
            std::cout << *e << std::endl;
            Bureaucrat E("Eric", 138);
            std::cout << E << std::endl;
            std::cout << std::endl;
            E.signForm(*e);
            E.executeForm(*e); 
            std::cout << std::endl;
            delete e;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
            std::cout << std::endl;
        }
    }
    return (0);
}
