#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{

    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &cpy);
        ~PresidentialPardonForm();
        PresidentialPardonForm const &operator=(PresidentialPardonForm const &cpy);

};

std::ostream &  operator<<(std::ostream & o, PresidentialPardonForm const &cpy);

#endif

/*

PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.

*/