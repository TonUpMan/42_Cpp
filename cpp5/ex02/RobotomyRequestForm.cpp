#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AFrom("RobotomyRequestForm", 72, 45){
    std::cout << "RobotomyRequest form has been requested" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : AForm(cpy){
    std::cout << "RobotomyRequest form has been requested" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm const &RobotomyRequestForm::operator=(RobotomyRequestForm const &cpy){}

