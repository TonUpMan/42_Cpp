#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(RPN const &cpy){
    *this = cpy;
}

RPN::~RPN(){}

RPN const &RPN::operator=(RPN const &rhs){
    if(this != &cpy){
        _calc = rhs._calc;
    }
    return(*this);
}