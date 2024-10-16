#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Array{

    public:
        Array(void);
        Array(unsigned int n);
        Array(Array const &cpy);
        ~Array();
        Array const &operator=(Array const &cpy);
        T   &operator[](unsigned int n);

        class IndexError : public std::exception{
            public:
                virtual const char* what() const throw();
        };

        class NewError : public std::exception{
            public:
                virtual const char* what() const throw();
        }
        
        unsigned int    size();

    private:
        T               *content;
        unsigned int    n;

};

#include "Array.tpp"

#endif