#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <climits>
#include <cstdlib>
#include <cctype>

class BitcoinExchange{

    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
        BitcoinExchange const &operator=(BitcoinExchange const &rhs);

        void    set_map(void);
        void    search(std::string data);
        
    private:
        std::map<std::string, int>  _ref;
};

std::string find_key_ref(std::string buff);
int         find_value_ref(std::string buff);

#endif