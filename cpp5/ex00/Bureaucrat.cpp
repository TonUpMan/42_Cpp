#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy){
    *this = cpy;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const & cpy){
    if(this != &cpy){
        name = cpy.getName();

    }
}

int         Bureaucrat::getGrade(void){}

std::string Bureaucrat::getName(void){}

void        Bureaucrat::upGrade(){}

void        Bureaucrat::downGrade(){}