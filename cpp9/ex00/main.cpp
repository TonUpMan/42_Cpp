#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    (void)ac;
    (void)av;
	BitcoinExchange data;

	try{
		data.set_ref();
		data.print_ref();
	}
	catch(std::exception &e){
		return(0);
	}
	return(1);
}