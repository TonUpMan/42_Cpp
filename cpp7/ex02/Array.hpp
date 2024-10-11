#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array{

    public:
        Array(void);
        Array(unsigned int n);
        Array(T const &cpy);
        ~Array();
        Array const &operator=(T const &cpy);
        T const &operator[](unsigned int n);

        unsigned int    size();

    private:
        T               *content;
        unsigned int    size;

};

#include "Array.tpp"

#endif