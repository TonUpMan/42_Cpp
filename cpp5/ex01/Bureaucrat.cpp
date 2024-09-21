#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade){
    if (grade < 1)
        throw(GradeTooHighException());
    if (grade > 150)
        throw(GradeTooLowException());
    std::cout << "Bureaucrat " << name << " was hired" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy) : name(cpy.name){
    *this = cpy;
    std::cout << "Bureaucrat " << this->name << " was hired(cpy)" << std::endl;

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

void        Bureaucrat::upGrade(int up){
    grade -= up;
    if(grade < 1)
        throw(GradeTooHighException());
}

void        Bureaucrat::downGrade(int down){
    grade += down;
    if(grade > 150)
        throw(GradeTooLowException());
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Bureaucrat's grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
        return ("Bureaucrat's grade is too low");
}

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & cpy){
    o << cpy.getName() << " , bureaucrat grade " << cpy.getGrade();
    return(o);
}
