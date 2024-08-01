
#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed(void) {
    
    std::cout << "Default constructor called" << std::endl;
    nbr = 0;
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
        this->nbr = cpy.getRawBits();
    return(*this);
}

int Fixed::getRawBits(void) const{

    std::cout << "getRawBits member function called" << std::endl;
    return (nbr);
}

void Fixed::setRawBits(int const raw){nbr = raw;}