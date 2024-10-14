#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


int main(){

    {
        std::string A_name = "albert";
        std::string target = "pierre";
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////// ShrubberyCreation \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            AForm *a = new ShrubberyCreationForm(target);
            std::cout << std::endl;
            std::cout << *a << std::endl;
            Bureaucrat A(A_name, 1);
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
        std::string B_name = "ben";
        std::string target = "paul";
        std::cout << std::endl;
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////// PresidentialPardon \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            AForm *b = new PresidentialPardonForm(target);
            std::cout << std::endl;
            std::cout << *b << std::endl;
            Bureaucrat B(B_name, 5);
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
        std::string C_name = "coco";
        std::string target = "jacque";
        std::cout << std::endl;
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////// RobotomyRequest \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            srand(time(0));
            AForm *c = new RobotomyRequestForm(target);
            std::cout << std::endl;
            std::cout << *c << std::endl;
            Bureaucrat C(C_name, 5);
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
        std::string D_name = "Dam";
        std::string target = "bernard";
        std::cout << std::endl;
        std::cout << "///////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "/////////////// Bad grade for sign \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            AForm *d = new PresidentialPardonForm(target);
            std::cout << std::endl;
            std::cout << *d << std::endl;
            Bureaucrat D(D_name, 150);
            std::cout << D << std::endl;
            std::cout << std::endl;
            D.signForm(*d);
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
        std::string E_name = "eric";
        std::string target = "remi";
        std::cout << std::endl;
        std::cout << "///////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "/////////////// Bad grade for execut \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            AForm *e = new PresidentialPardonForm(target);
            std::cout << std::endl;
            std::cout << *e << std::endl;
            Bureaucrat E(E_name, 25);
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
