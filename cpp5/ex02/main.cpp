#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){

    {
        AForm *a = new ShrubberyCreationForm ("pierre");
        std::cout << *a << std::endl;
        Bureaucrat A("a", 1);
        A.signForm(*a);
        A.executeForm(*a);
        delete a;
    }
    {
        AForm *b = new PresidentialPardonForm("paul");
        std::cout << *b << std::endl;
        Bureaucrat B("b", 5);
        B.signForm(*b);
        B.executeForm(*b);
        delete b;
    }
    {
        AForm *c = new RobotomyRequestForm ("jacque");
        std::cout << *c << std::endl;
        Bureaucrat C("c", 5);
        C.signForm(*c);
        C.executeForm(*c);
        delete c;
    }
    return (0);
}
