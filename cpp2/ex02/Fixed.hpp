
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

        Fixed & operator=(Fixed const & cpy);
        Fixed & operator<(Fixed const & cpy);
        Fixed & operator>(Fixed const & cpy);
        Fixed & operator<=(Fixed const & cpy);
        Fixed & operator>=(Fixed const & cpy);
        Fixed & operator==(Fixed const & cpy);
        Fixed & operator!=(Fixed const & cpy);

        Fixed & operator+(Fixed const & cpy);
        Fixed & operator-(Fixed const & cpy);
        Fixed & operator*(Fixed const & cpy);
        Fixed & operator/(Fixed const & cpy);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat( void ) const;
        int     toInt( void ) const;

    private:
        int                 nbr;
        static const int    bit;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & cpy);

#endif