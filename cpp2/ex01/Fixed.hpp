
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{

    public:
        Fixed(void);
        Fixed(Fixed const & cpy);
        ~Fixed(void);
        Fixed & operator=(Fixed const & cpy);
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int                 nbr;
        static const int    bit;
};

const int Fixed::bit = 8;

#endif