#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_exec) : name(name), grade_sign(grade_sign), grade_execute(grade_exec) {
    std::cout << name << " form has been requested" << std::endl;
    sign = false;
}

Form::Form(Form const & cpy) : name(cpy.name),grade_sign(cpy.grade_sign), grade_execute(cpy.grade_execute) {
    std::cout << name << " form has been copied" << std::endl;
    *this = cpy;
}

Form::~Form(){
    std::cout << name << " form has been destructed" << std::endl;
}

Form const & Form::operator=(Form const & cpy){
    if(this != &cpy){
        sign = cpy.sign;
    }
    return(*this);
}

const char *Form::GradeTooHighException::what()const throw(){
    return(" grade is too high for this form");
}

const char *Form::GradeTooLowException::what()const throw(){
    return(" grade is too low for this form");
}

std::string Form::getName() const{return(name);}
int         Form::getBool() const{return(sign);}
int         Form::getGradeSign() const{return(grade_sign);}
int         Form::getGradeExec() const{return(grade_execute);}

std::ostream &  operator<<(std::ostream & o, Form const & cpy){
    o << cpy.getName() << " Form" << std::endl << "Grade for sign: "
        << cpy.getGradeSign() << std::endl << "Grade for execute: " << cpy.getGradeExec()
            << std::endl << "Form sign? " << cpy.getBool() << std::endl;
    return(o);
}