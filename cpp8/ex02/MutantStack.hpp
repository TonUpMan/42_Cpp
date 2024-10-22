#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{

    public:
        MutantStack();
        MutantStack(MutantStack const &cpy);
        ~MutantStack();
        MutantStack const &operator=(MutantStack const &cpy);

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end(); 

};

#include "MutantStack.tpp"

#endif