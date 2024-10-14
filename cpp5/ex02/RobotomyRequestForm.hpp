#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{

    public:
        RobotomyRequestForm(std::string &target);
        RobotomyRequestForm(RobotomyRequestForm const &cpy);
        ~RobotomyRequestForm();
        RobotomyRequestForm const &operator=(RobotomyRequestForm const &cpy);
        virtual void    execute(Bureaucrat const & executor) const;
};

#endif
