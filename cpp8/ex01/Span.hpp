#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <iostream>
#include <stdexcept>

class Span{

    public:
        Span(unsigned int n);
        Span(Span const &cpy);
        ~Span();
        Span const &operator=(Span const &cpy);

        void    addNumber(int add);
        void    fill_span(int min, int max);
        int     shortestSpan();
        int     longestSpan();

        void    print();

    private:
        Span();
        unsigned int    _n;
        std::vector<int>       _span;
};



#endif