#include "Bureaucrat.hpp"

int main(){

    {
        std::cout << "//////////////////// Good Bureaucrat \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Bureaucrat bob("bob", 5);
            Bureaucrat regis("regis", 140);
            std::cout << std::endl;
            std::cout << bob << std::endl;
            std::cout << regis << std::endl;
            std::cout << std::endl;
            bob.upGrade(-150);
            regis.downGrade(-150);
            std::cout << bob << std::endl;
            std::cout << regis << std::endl;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

    {
        std::cout << "//////////////////// Bad Bureaucrat \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        std::cout << "////////// Grade too High initialized \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Bureaucrat paul("paul", -2);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "////////// Grade too Low initialized \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Bureaucrat paulo("paulo", 158);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "////////// Upgrade too High \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Bureaucrat marcel("marcel", 1);
            marcel.upGrade(2);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "////////// Downgrade too Low \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Bureaucrat marcel("marcel", 149);
            marcel.downGrade(2);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    return (0);
}
