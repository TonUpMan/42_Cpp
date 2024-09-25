#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{

    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &cpy);
        ~RobotomyRequestForm();
        RobotomyRequestForm const &operator=(RobotomyRequestForm const &cpy);
        virtual void    execute(Bureaucrat const & executor) const;
};

#endif

/*

RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.

*/