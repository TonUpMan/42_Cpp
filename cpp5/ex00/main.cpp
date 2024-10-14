#include "Bureaucrat.hpp"

int main(){

    {
        std::cout << "//////////////////// Good Bureaucrat \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            std::string bob_name = "bob";
            std::string regis_name = "regis";

            Bureaucrat bob(bob_name, 5);
            Bureaucrat regis(regis_name, 140);
            std::cout << std::endl;
            std::cout << bob << std::endl;
            std::cout << regis << std::endl;
            std::cout << std::endl;
            bob.upGrade();
            regis.downGrade();
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
        std::string marcel_name = "marcel";
        std::cout << "//////////////////// Bad Bureaucrat \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        std::cout << "////////// Grade too High initialized \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            std::string paul_name = "paul";
            Bureaucrat paul(paul_name, -2);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "////////// Grade too Low initialized \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            std::string paulo_name = "paulo";
            Bureaucrat paulo(paulo_name, 158);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "////////// Upgrade too High \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Bureaucrat marcel(marcel_name, 1);
            marcel.upGrade();
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "////////// Downgrade too Low \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Bureaucrat marcel(marcel_name, 150);
            marcel.downGrade();
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    return (0);
}
