#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

template<typename T>
void    easyfind(T tab, int find){
    
    typename T::iterator it = std::find(tab.begin(), tab.end(), find);
    if (it != tab.end())
        std::cout << "value find: " << *it << std::endl;
    else
        throw(std::runtime_error("value not found"));
}

#endif