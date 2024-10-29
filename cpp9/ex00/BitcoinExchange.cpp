#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy){
	*this = cpy;
}
BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange const &BitcoinExchange::operator=(BitcoinExchange const &rhs){
	if(this != &rhs){}
	return (*this);
}

void	BitcoinExchange::set_ref(void){
	
	std::fstream	in;
	std::string		buff;

	in.open("data.csv");
	if(!in.is_open())
		throw(std::runtime_error("data.csv not open"));
	getline(in, buff);
	while(getline(in, buff)){
		std::cout << find_key(buff) << std::endl;
		_ref[find_key(buff)]=find_value(buff);
		//_ref[0].fir
		//_ref.insert(std::make_pair(key, value));
	}
}

void	BitcoinExchange::print_ref(){
	std::map<std::string, int>::iterator it;
	for(it = _ref.begin(); it != _ref.end(); it++){
		std::cout << "key: " << it->first << "value: " << it->second << std::endl;
	}
}

std::string find_key(std::string buff){
	
	//std::cout << "buff in find key" << buff << std::endl;
	std::string	result;
	int			count = 0;
	for(int i = 0; i < 10; i++){
		result[i] = buff[i];
		if(buff[i] == '-' || isdigit(buff[i]))
			count++;
	}
	if(count != 10)
		return ("bad_key");
	return(result);	
}

int		find_value(std::string buff){
	//std::cout << "buff in find value" << buff << std::endl;
	int	result;
	result = std::strtod(&buff[10], NULL);
	if(result > INT_MAX || result < INT_MIN)
		return(-1);
	return(result);
}