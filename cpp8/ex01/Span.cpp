#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int N){

}

Span::Span(Span const &cpy){
    *this = cpy;
}

Span::~Span(){}

Span const &Span::operator=(Span const &cpy){
    if(this != &cpy){

    }
    return(*this);
}