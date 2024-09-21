#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form{

    public:
        Form(std::string name, int grade_sign, int grade_exec);
        Form(Form const & cpy);
        ~Form();
        Form const & operator=(Form const & cpy);
    
        class GradeTooHighException{
            virtual const char *what()const throw();
        };
    
        class GradeTooLowException{
            virtual const char *what()const throw();
        };

        std::string getName() const;
        int         getBool() const;
        int         getGradeSign() const;
        int         getGradeExec() const;
    private:
        const std::string   name;
        bool                sign;
        const int           grade_sign;
        const int           grade_execute;

};

std::ostream &  operator<<(std::ostream & o, Form const & cpy);


#endif