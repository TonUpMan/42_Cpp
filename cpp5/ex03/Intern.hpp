#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{

    public:
        Intern();
        Intern(Intern const &cpy);
        ~Intern();
        Intern const &operator=(Intern const &cpy);
        AForm   *makeForm(std::string form, std::string target);

        class BadForm : public std::exception{
            public:
                virtual const char *what() const throw();
        };
};

#endif