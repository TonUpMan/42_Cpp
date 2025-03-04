#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include <string>

struct Data
{
    std::string test;
};


class Serializer{
    
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private:
        Serializer();
        Serializer(Serializer const &);
        ~Serializer();
        Serializer const &operator=(Serializer const &);

};

#endif