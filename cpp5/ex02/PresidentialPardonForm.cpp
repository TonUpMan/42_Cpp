#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5){
    std::cout << "PresidentialPardon form has been requested" << std::endl;
    (void) target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : AForm(cpy){
    std::cout << "PresidentialPardon form has been requested(copy)" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardon form has been destructed" << std::endl;
}

PresidentialPardonForm const &PresidentialPardonForm::operator=(PresidentialPardonForm const &cpy){
    if(this != &cpy){

    }
    return(*this);
}

std::ostream &  operator<<(std::ostream & o, PresidentialPardonForm const &cpy){
    o << cpy.getName() << std::endl << "Grade for sign: "
        << cpy.getGradeSign() << std::endl << "Grade for execute: " << cpy.getGradeExec()
            << std::endl << "Form sign? " << cpy.getBool() << std::endl;
    return(o); 
}
