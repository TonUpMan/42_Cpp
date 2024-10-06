#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}


Base *generate(){
    int random = rand() % 3;
    if(!random)
        return (new A());
    else if(random == 1)    
        return (new B());
    else
        return (new C());
}

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "is type A(ptr)" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "is type B(ptr)" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "is type C(ptr)" << std::endl;
}

void identify(Base& p){
    try {
        dynamic_cast<A&>(p);
        std::cout << "is type A(ref)" << std::endl;
    } 
    catch (std::exception&){}
    try {
        dynamic_cast<B&>(p);
        std::cout << "is type B(ref)" << std::endl;
    }
    catch (std::exception&){}
    try {
        dynamic_cast<C&>(p);
        std::cout << "is type C(ref)" << std::endl;
    }
    catch (std::exception&){}
}