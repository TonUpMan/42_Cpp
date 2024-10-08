#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array{

    public:
        Array<T>(void);
        Array<T>(unsigned int n);
        Array<T>(Array<T> const &cpy);
        ~Array<T>();
        Array<T> const &operator=(Array<T> const &cpy)
};

#endif