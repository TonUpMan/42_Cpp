#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string &target) : AForm("RobotomyRequestForm", 72, 45){
    std::cout << "RobotomyRequest form has been requested" << std::endl;
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : AForm(cpy){
    std::cout << "RobotomyRequest form has been requested" << std::endl;
    *this = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequest form has been destructed" << std::endl;
}

RobotomyRequestForm const &RobotomyRequestForm::operator=(RobotomyRequestForm const &cpy){
    if(this != &cpy){
        target = cpy.target;
    }
    return(*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if(executor.getGrade() > getGradeExec())
        throw(GradeTooLowException());
    if(!getBool())
        throw(FormNotSign());
    std::cout << executor.getName() << " executed " << getName()<< std::endl;
    if((rand() % 2) == 0){
        std::cout << "VrrrrrrrRRRRRR" << std::endl;
        std::cout << "BzzzzzzzzZZZZZ" << std::endl;
        std::cout << "TrrrrrrrrrRRRR" << std::endl;
        std::cout << target << " has been robotomized" << std::endl;
    }
    else
        std::cout << "the robotomy failed" << std::endl;
}

