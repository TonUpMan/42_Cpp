#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy){
	*this = cpy;
}
BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange const &BitcoinExchange::operator=(BitcoinExchange const &rhs){
	if(this != &rhs){
		_ref = rhs._ref;
	}
	return (*this);
}

void	BitcoinExchange::set_map(void){
	
	std::fstream	in;
	std::string		buff;

	in.open("data.csv");
	if(!in.is_open())
		throw(std::runtime_error("data.csv not open"));
	getline(in, buff);
	while(getline(in, buff)){
		_ref[find_key_ref(buff)]=find_value_ref(buff);
	}
	in.close();
}

void	BitcoinExchange::print_ref(void){
	std::map<std::string, int>::iterator it;
	for(it = _ref.begin(); it != _ref.end(); it++){
		std::cout << "Key: " << it->first << " Value: " << it->second << std::endl;
	}
}

std::string find_key_ref(std::string buff){
	
	std::string	result;
	int			count = 0;
	
	result = buff.substr(0, 10);
	for(int i = 0; i < 10; i++){
		if(buff[i] == '-' || isdigit(buff[i]))
			count++;
	}
	if(count != 10)
		return (NULL);
	return(result);	
}

int		find_value_ref(std::string buff){
	
	std::string	tmp;
	int			result;
	
	tmp = buff.substr(11, (buff.size() - 11));
	result = std::strtod(tmp.c_str(), NULL);
	if(result > INT_MAX || result < INT_MIN)
		return(-1);
	return(result);
}