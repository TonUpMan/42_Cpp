#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45){
    std::cout << "RobotomyRequest form has been requested" << std::endl;
    this->target = target;
    succes = 0;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : AForm(cpy){
    std::cout << "RobotomyRequest form has been requested" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequest form has been requested(copy)" << std::endl;
}

RobotomyRequestForm const &RobotomyRequestForm::operator=(RobotomyRequestForm const &cpy){
    if(this != &cpy){
        target = cpy.target;
    }
    return(*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if(executor.getGrade() <= getGradeExec() && getBool()){
            std::cout << "VrrrrrrrRRRRRR" << std::endl;
            std::cout << "BzzzzzzzzZZZZZ" << std::endl;
            std::cout << "TrrrrrrrrrRRRR" << std::endl;
            std::cout << target << " has been robotomized" << std::endl;
            std::cout << executor.getGrade() << " executed " << getName();
    }
    else   
        throw(GradeTooLowException());
}

