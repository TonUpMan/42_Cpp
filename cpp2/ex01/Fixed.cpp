
#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    nbr = 0;
}

Fixed::Fixed(const int nb){
    std::cout << "int constructor called" << std::endl;
    nbr = nb << bit;
}

Fixed::Fixed(const float nb){
    std::cout << "float constructor called" << std::endl;
    nbr = roundf(nb * (1 << bit));
}

Fixed::Fixed(Fixed const & cpy){
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & cpy){
    std::cout << "Copy assignment operator called" << std::endl;
    if( this != &cpy)
        nbr = cpy.getRawBits();
    return(*this);
}

std::ostream &  operator<<(std::ostream & o, Fixed const & cpy){
    o << cpy.toFloat();
    return(o);
}

int Fixed::getRawBits(void) const{return (nbr);}
void Fixed::setRawBits(int const raw){nbr = raw;}
float   Fixed::toFloat(void) const{return((float)nbr / (1 << bit));}
int     Fixed::toInt( void ) const{return(nbr >> bit);}


