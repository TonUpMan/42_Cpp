#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){

    {
        AForm *a = new PresidentialPardonForm ("paolo");
        std::cout << *a << std::endl;
    }

    {

    }
    return (0);
}
