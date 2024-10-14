#include "Intern.hpp"

Intern::Intern(){
    std::cout << "intern was hired" << std::endl;
}

Intern::Intern(Intern const &cpy){
    *this = cpy;
}

Intern::~Intern(){
    std::cout << "intern was fired" << std::endl;
}

Intern const &Intern::operator=(Intern const &cpy){
    if(this != &cpy){
        *this = cpy;
    }
    return(*this);
}

AForm    *Intern::makeForm(std::string form, std::string target){

    int i = 0;
    std::string Form[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    while(i < 3){
        if(Form[i] == form)
            break;
        i++;
    }
    switch(i)
    {
        case 0:
        {
            std::cout << "Intern creates " << form << std::endl;
            return(new RobotomyRequestForm(target));
        }
        case 1:
        {
            std::cout << "Intern creates " << form << std::endl;
            return(new PresidentialPardonForm(target));
        }
        case 2:
        {
            std::cout << "Intern creates " << form << std::endl;
            return(new ShrubberyCreationForm(target));
        }
    }
    throw(BadForm());
    return(NULL);
}   

const char  *Intern::BadForm::what() const throw(){
    return("not available form");
}