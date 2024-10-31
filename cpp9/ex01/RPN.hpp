#ifndef RPN_HPP
#define RPN_HPP

#include <algorithm>
#include <stack>
#include <iostream>


class RPN{

    public:
        RPN();
        RPN(RPN const &cpy);
        ~RPN();
        RPN const &operator=(RPN const &rhs);
    
    private:
        std::stack  _calc

};

#endif