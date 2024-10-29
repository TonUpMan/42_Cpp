#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <climits>
#include <cstdlib>

class BitcoinExchange{

    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
        BitcoinExchange const &operator=(BitcoinExchange const &rhs);

        void    set_ref(void);
        void    print_ref(void);
    private:
        std::map<std::string, int>  _ref;
};

std::string find_key(std::string buff);
int         find_value(std::string buff);

#endif