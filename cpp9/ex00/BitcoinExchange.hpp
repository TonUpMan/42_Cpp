#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange{

    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
        BitcoinExchange const &operator=(BitcoinExchange const &rhs);

        void    set_ref(std::string data);
    private:
        std::map<std::string, int>    ref; 
};

#endif