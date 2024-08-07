
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{

    public:
        Fixed(void);
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(Fixed const & cpy);
        ~Fixed(void);

        bool            operator<(Fixed const & cpy) const;
        bool            operator>(Fixed const & cpy) const;
        bool            operator<=(Fixed const & cpy) const;
        bool            operator>=(Fixed const & cpy) const;
        bool            operator==(Fixed const & cpy) const;
        bool            operator!=(Fixed const & cpy) const;

        Fixed           &operator=(Fixed const & cpy);
        Fixed           operator+(Fixed const & cpy);
        Fixed           operator-(Fixed const & cpy);
        Fixed           operator*(Fixed const & cpy);
        Fixed           operator/(Fixed const & cpy);

        Fixed           operator++(int);
        Fixed           &operator++();
        Fixed           operator--(int);
        Fixed           &operator--();

        static Fixed    min(const Fixed &a, const Fixed &b);
        static Fixed    max(const Fixed &a, const Fixed &b);
        static Fixed    min(Fixed &a, Fixed &b);
        static Fixed	max(Fixed &a, Fixed &b);

        int             getRawBits(void) const;
        void            setRawBits(int const raw);
        float           toFloat(void) const;
        int             toInt(void) const;

    private:
        int                 nbr;
        static const int    bit;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & cpy);

#endif