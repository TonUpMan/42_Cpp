#include "Base.hpp"

int main(){
    srand(time(0));
    Base *d;
    for(int i = 0; i < 6; i++){
        std::cout << "--------------------------------" << std::endl;
        d = generate();
        identify(*d);
        identify(d);
        delete d;

    }
}