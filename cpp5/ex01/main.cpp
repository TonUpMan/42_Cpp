#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

    {
        std::cout << "//////////////////// Good Form \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Bureaucrat  bob("bob", 5);
            Form        B36("B36", 5, 10);
            std::cout << std::endl;
            std::cout << bob << std::endl;
            std::cout << std::endl;
            std::cout << B36 << std::endl;
            std::cout << std::endl;
            bob.signForm(B36);
            std::cout << std::endl;
            std::cout << B36 << std::endl;
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

    {
        std::cout << "//////////////////// Bad Form \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        std::cout << "////////// Form request too High \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Form    B42("B42", -1, 50);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        try{
            Form    B42("B42", 50, -1);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "////////// Form resquest too Low \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Form    B42("B42", 151, 50);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        try{
            Form    B42("B42", 50, 151);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "////////// Form signed too Low \\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Form    B42("B42", 1, 1);
            Bureaucrat  pierre("Pierre", 2);
            pierre.signForm(B42);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    return (0);
}
