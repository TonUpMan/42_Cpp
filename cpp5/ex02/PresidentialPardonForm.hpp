#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{

    public:
        PresidentialPardonForm(std::string &target);
        PresidentialPardonForm(PresidentialPardonForm const &cpy);
        ~PresidentialPardonForm();
        PresidentialPardonForm const &operator=(PresidentialPardonForm const &cpy);
        virtual void    execute(Bureaucrat const & executor) const;

};

#endif
