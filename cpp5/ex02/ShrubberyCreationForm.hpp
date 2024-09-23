#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{

    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm();
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm const &operator=(ShrubberyCreationForm const &cpy);
};

#endif

/*

ShrubberyCreationForm: Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.

*/