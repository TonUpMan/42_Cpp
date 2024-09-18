#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <string>

class Bureaucrat{

    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat const & cpy);
        ~Bureaucrat();
        Bureaucrat const & operator=(Bureaucrat const & cpy);
    
        int         getGrade(void);
        std::string getName(void);
        void        upGrade();
        void        downGrade();

    private:
        const std::string   name;
        int                 grade;
};

#endif
