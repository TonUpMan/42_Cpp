#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <list>
#include <iostream>
#include <stdexcept>

class Span{

    public:
        Span(unsigned int n);
        Span(Span const &cpy);
        ~Span();
        Span const &operator=(Span const &cpy);

        void    addNumber(int add);
        //void    fill_span(int min, int max);
        int     shortestSpan();
        int     longestSpan();

    private:
        Span();
        unsigned int    _n;
        std::list<int>       _span;
};



#endif