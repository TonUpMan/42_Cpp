#ifndef SPAN_HPP
#define SPAN_HPP

class Span{

    public:
        Span(unsigned int N);
        Span(Span const &cpy);
        ~Span();
        Span const &operator=(Span const &cpy);

    private:
        Span();
};

#endif