#ifndef RPN_HPP
#define RPN_HPP

#include <algorithm>
#include <stack>
#include <iostream>
#include <sstream>
#include <string>


class RPN{

    public:
        RPN();
        RPN(RPN const &cpy);
        ~RPN();
        RPN const &operator=(RPN const &rhs);
    
        void    add_number(int n);
        int     size();
        void    add();
        void    sub();
        void    multi();
        void    div();
        int    print();

    private:
        std::stack<int>  _calc;

};

#endif