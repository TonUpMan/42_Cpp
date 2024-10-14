#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


int main()
{
    Intern someRandomIntern;
    {
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////// ShrubberyCreation \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            AForm *a;
            a = someRandomIntern.makeForm("shrubbery creation", "Bender");
            std::cout << *a << std::endl;
            delete a;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////// PresidentialPardon \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        try{
            AForm *a;
            a = someRandomIntern.makeForm("presidential pardon", "Bender");
            std::cout << *a << std::endl;
            delete a;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////// RobotomyRequest \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            AForm *a;
            a = someRandomIntern.makeForm("robotomy request", "Bender");
            std::cout << *a << std::endl;
            delete a;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
        {
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "//////////////////////////// Bad Request \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            AForm *a;
            a = someRandomIntern.makeForm("robot request", "Bender");
            std::cout << *a << std::endl;
            delete a;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}
