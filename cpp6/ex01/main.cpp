#include "Serializer.hpp"

int main(){

    Data        a;
    uintptr_t   c;

    a.test = "i'm a test";
    std::cout << "data before serializer: " << a.test << std::endl;
    c = Serializer::serialize(&a);
    Data *backup= Serializer::deserialize(c);
    std::cout << "data after serializer: " << backup->test <<std::endl;
    return(0);
}