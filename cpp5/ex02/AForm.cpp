#include "AForm.hpp"

AForm::AForm(std::string name, int grade_sign, int grade_exec) : name(name), grade_sign(grade_sign), grade_execute(grade_exec) {
    if (grade_sign < 1 || grade_execute < 1)
        throw(GradeTooHighException());
    else if (grade_sign > 150 || grade_execute > 150)
        throw(GradeTooLowException());
    else
        std::cout << name << " form has been requested" << std::endl;
    sign = false;
}

AForm::AForm(AForm const & cpy) : name(cpy.name),grade_sign(cpy.grade_sign), grade_execute(cpy.grade_execute) {
    std::cout << name << " form has been copied" << std::endl;
    *this = cpy;
}

AForm::~AForm(){
    std::cout << name << " form has been destructed" << std::endl;
}

AForm const & AForm::operator=(AForm const & cpy){
    if(this != &cpy){
        sign = cpy.sign;
    }
    return(*this);
}

const char *AForm::GradeTooHighException::what()const throw(){
    return(" grade is too high for this form");
}

const char *AForm::GradeTooLowException::what()const throw(){
    return(" grade is too low for this form");
}

std::string AForm::getName() const{return(name);}
int         AForm::getBool() const{return(sign);}
int         AForm::getGradeSign() const{return(grade_sign);}
int         AForm::getGradeExec() const{return(grade_execute);}

std::ostream &  operator<<(std::ostream & o, AForm const & cpy){
    o << cpy.getName() << " Form" << std::endl << "Grade for sign: "
        << cpy.getGradeSign() << std::endl << "Grade for execute: " << cpy.getGradeExec()
            << std::endl << "Form sign? " << cpy.getBool() << std::endl;
    return(o);
}

void    AForm::beSigned(Bureaucrat const & bur){
    if(bur.getGrade() <= getGradeSign())
        sign = true;
    else    
        throw(GradeTooLowException());
} 