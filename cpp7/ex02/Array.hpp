#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array{

    public:
        Array(void);
        Array(unsigned int n);
        Array(T const &cpy);
        ~Array();
        Array const &operator=(T const &cpy)
};

#endif