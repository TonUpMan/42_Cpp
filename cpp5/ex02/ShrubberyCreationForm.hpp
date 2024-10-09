#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{

    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm const &operator=(ShrubberyCreationForm const &cpy);
        virtual void    execute(Bureaucrat const & executor) const;
    
};

#endif
