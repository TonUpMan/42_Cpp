#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5){
    std::cout << "PresidentialPardon form has been requested" << std::endl;
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : AForm(cpy){
    *this = cpy;
    std::cout << "PresidentialPardon form has been requested(copy)" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardon form has been destructed" << std::endl;
}

PresidentialPardonForm const &PresidentialPardonForm::operator=(PresidentialPardonForm const &cpy){
    if(this != &cpy){
        target = cpy.target;
    }
    return(*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if(executor.getGrade() > getGradeExec()){
        throw(GradeTooLowException());
        return ;
    }
    if(!getBool()){
        throw(FormNotSign());
        return ;
    }
    std::cout << executor.getName() << " executed " << getName() << std::endl;          
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl; 

}

