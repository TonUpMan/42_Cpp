#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <stdexcept>
#include <string>
#include <iostream>

class AForm;

class Bureaucrat{

    public:
        Bureaucrat(std::string &name, int grade);
        Bureaucrat(Bureaucrat const & cpy);
        ~Bureaucrat();
        Bureaucrat const & operator=(Bureaucrat const & cpy);

        class GradeTooHighException : public std::exception{
            public:
               virtual const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception{
           public:
               virtual const char* what() const throw();
        };
        
        int                 getGrade(void) const;
        std::string         getName(void) const;
        void                upGrade();
        void                downGrade();
      
        virtual void        signForm(AForm &form);
        virtual void        executeForm(AForm const & form) const;

    private:
        Bureaucrat();
        const std::string   name;
        int                 grade;
};

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & cpy);

#endif
