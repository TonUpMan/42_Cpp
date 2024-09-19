#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade){
    std::cout << "Bureaucrat " << name << " was hired" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy) : name(cpy.name){
    *this = cpy;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat " << name << " was fired" << std::endl;
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const & cpy){
    if(this != &cpy){
        grade = cpy.grade;
    }
    return(*this);
}

int         Bureaucrat::getGrade(void) const{return(grade);}
std::string Bureaucrat::getName(void) const{return(name);}

void        Bureaucrat::upGrade(){
    if(grade < 1)
        throw(GradeTooHighException());
    grade--;
}

void        Bureaucrat::downGrade(){
    if(grade > 150)
        throw(GradeTooLowException());
    grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return ("too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
        return ("too low");
}