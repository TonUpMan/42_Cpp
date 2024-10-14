#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

    {
        std::cout << "/////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////// Good Form \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "/////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            std::string bob_name = "bob";
            std::string form_name = "B36";

            Bureaucrat  bob(bob_name, 5);
            Form        B36(form_name, 5, 10);
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
        std::cout << "///////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "//////////////////// Bad Form \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "///////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        std::cout << "Form request too High(sign):" << std::endl;
        std::cout << std::endl;
        try{
            std::string form_name = "B42";
            Form    B42(form_name, -1, 50);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Form request too High(execut):" << std::endl;
        std::cout << std::endl;
        try{
            std::string form_name = "B42";
            Form    B42(form_name, 50, -1);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Form resquest too Low(sign):" << std::endl;
        std::cout << std::endl;
        try{
            std::string form_name = "B42";
            Form    B42(form_name, 151, 50);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Form resquest too Low(execut):" << std::endl;
        std::cout << std::endl;
        try{
            std::string form_name = "B42";
            Form    B42(form_name, 50, 151);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << "/////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "//////////////////// for signed too low \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "/////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            std::string form_name = "B42";
            std::string pierre_name = "pierre";
            Form    B42(form_name, 1, 1);
            Bureaucrat  pierre(pierre_name, 2);
            pierre.signForm(B42);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    return (0);
}
