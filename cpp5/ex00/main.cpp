#include "Bureaucrat.hpp"

int main(){

    try{
        Bureaucrat bob("bob", 5);
        for(int i = 0; i < 6; i++)
            bob.upGrade();
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

}
