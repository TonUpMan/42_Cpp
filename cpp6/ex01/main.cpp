#include "Serializer.hpp"

int main(){

    Data        a;
    uintptr_t   c;

    a.test = "i'm a test";
    std::cout << "///////////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << "////////////////////////////// Serializer \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << "///////////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    std::cout << "adress Data: " << &a << std::endl;
    std::cout << "data before serializer: " << a.test << std::endl;
    std::cout << std::endl;
    std::cout << "/////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << "//////////////////// Serialization \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << "/////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    c = Serializer::serialize(&a);
    std::cout << "value uintptr: " << c << std::endl;
    std::cout << "value hex : 0x" << std::hex << c << std::endl;
    std::cout << std::endl;
    std::cout << "/////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << "//////////////////// Deserialization \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << "/////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    Data *backup= Serializer::deserialize(c);
    std::cout << "adress Data: " << &a << std::endl;
    std::cout << "data after serializer: " << backup->test <<std::endl;
    std::cout << std::endl;
    return(0);
}