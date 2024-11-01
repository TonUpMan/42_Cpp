#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(RPN const &cpy){
    *this = cpy;
}

RPN::~RPN(){}

RPN const &RPN::operator=(RPN const &rhs){
    if(this != &rhs){
        _calc = rhs._calc;
    }
    return(*this);
}

void    RPN::add_number(int n){_calc.push(n);}
int     RPN::size(){return(_calc.size());}
int    RPN::print(){return(_calc.top());}

void    RPN::add(){

    int a, b;
    a = _calc.top();
    _calc.pop();
    b = _calc.top();
    _calc.pop();
    b += a;
    _calc.push(b);
}

void    RPN::sub(){
    
    int a, b;
    a = _calc.top();
    _calc.pop();
    b = _calc.top();
    _calc.pop();
    b -= a;
    _calc.push(b);
}

void    RPN::multi(){
    
    int a, b;
    a = _calc.top();
    _calc.pop();
    b = _calc.top();
    _calc.pop();
    b *= a;
    _calc.push(b);
}

void    RPN::div(){
    
    int a, b;
    a = _calc.top();
    _calc.pop();
    b = _calc.top();
    _calc.pop();
    b /= a;
    _calc.push(b);
}
