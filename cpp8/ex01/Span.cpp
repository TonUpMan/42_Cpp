#include "Span.hpp"

/////////////////////////////////////////////////////////////////////////////////////////////
void    Span::print(){
    std::cout << "size: " << _span.size() << std::endl;
    for(std::vector<int>::iterator it = _span.begin(); it != _span.end(); it++){
        std::cout << *it << std::endl;
    }
    std::cout << "--------------------------------------------" << std::endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////

Span::Span(){}

Span::Span(unsigned int n) : _n(n){
    std::cout << "span constructed" << std::endl; 
}

Span::Span(Span const &cpy){
    *this = cpy;
}

Span::~Span(){
    std::cout << "span destruted" << std::endl;
}

Span const &Span::operator=(Span const &cpy){
    if(this != &cpy){
       *this = cpy;
    }
    return(*this);
}

void    Span::addNumber(int add){
    if(_span.size() == _n)
        throw(std::runtime_error("span is full"));
    _span.push_back(add);
}

int     Span::shortestSpan(){
    
    std::vector<int>::iterator lhs, rhs;
    int shortest = longestSpan(), tmp = 0;

    std::sort(_span.begin(), _span.end());
    lhs = _span.begin();
    rhs = _span.begin() + 1;
    for(int i = 0; i < static_cast<int>(_span.size()) - 1; i++){
        tmp = *rhs - *lhs;
        if(tmp < shortest)
            shortest = tmp;
        rhs++;
        lhs++;
    }
    return(shortest);
}

int     Span::longestSpan(){
    
    std::vector<int>::iterator it;

    std::sort(_span.begin(), _span.end());
    it = _span.end();
    it--;
    return(*it - *_span.begin());
}

void    Span::fill_span(std::vector<int>::iterator min, std::vector<int>::iterator max){
    if(_span.size() + std::distance(min, max) > _n)
        throw(std::runtime_error("span canno't receive all values"));
    _span.insert(_span.begin(), min, max);
}