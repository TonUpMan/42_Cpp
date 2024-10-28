#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){
    std::fstream    fin;
    std::string     buff;
    fin.open("data.csv");
    if(!fin.is_open())
        throw(std::runtime_error("error: data file not open"));
    while(std::getline(fin, buff)){
        std::cout << buff << std::endl;
    }
}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy){
    *this = cpy;
}
BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange const &BitcoinExchange::operator=(BitcoinExchange const &rhs){
    if(this != &rhs)
    return(*this);
}

void    set_ref(std::string data){

}