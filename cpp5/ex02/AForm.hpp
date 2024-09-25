#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>


class Bureaucrat;

class AForm{

    public:
        AForm(std::string name, int grade_sign, int grade_exec);
        AForm(AForm const & cpy);
        virtual ~AForm();
        AForm const &operator=(AForm const & cpy);
    
        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what()const throw();
        };
    
        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what()const throw();
        };

        class FormNotSign : public std::exception{
            public:
                virtual const char *what()const throw();
        };

        void            beSigned(Bureaucrat const &bur);
        std::string     getName() const;
        int             getBool() const;
        int             getGradeSign() const;
        int             getGradeExec() const;
        virtual void    execute(Bureaucrat const & executor) const = 0;

    protected:
        std::string target;

    private:
        const std::string   name;
        bool                sign;
        const int           grade_sign;
        const int           grade_execute;

};

std::ostream &  operator<<(std::ostream & o, AForm const & cpy);


#endif