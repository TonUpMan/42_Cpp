#include "BitcoinExchange.hpp"

bool	check_value_format(std::string data){
	
	int i = data.find('|');
	int pt = data.find('.');
	std::string tmp = data.substr(i + 1, (data.length() - i));
	if(pt == -1){
		double result = strtod(tmp.c_str(), NULL);
		if(result > INT_MAX){
			std::cout << "error: too large a number => " << result << std::endl;
			return(false);
		}
		if(result < 0){
			std::cout << "error: not a positive number => " << result << std::endl;
			return(false);
		}
	}
	else{
		float result = strtof(tmp.c_str(), NULL);
		if(result < 0){
			std::cout << "error: not a positive number => " << result << std::endl;
			return(false);
		}
	}
	return(true);
}

bool	check_date_format(std::string data){
	
	int i = data.find('|');
	int nbr = 0;
	int sep = 0;
	for(int it = 0; it < i; it++){
		if(data[it] == '-')
			sep++;
		if(isdigit(data[it]))
			nbr++;
	}
	if(sep != 2 || nbr != 8){
		std::cout << "error: date format => " << data.substr(0, i) << " Expected: YYYY-MM-DD" << std::endl;
		return(false);
	}
	return(true);
}

bool	check_format(std::string data){

	if(data.empty() || data[0] == '\n'){
		std::cout << "error: empty lign" << std::endl;
		return(false);
	}
	if(data == "date | value"){
		std::cout << data << std::endl;
		return(false);
	}
	int n_date = 0;
	int pipe = 0;
	int n_value = 0;
	for(int i = 0; i < static_cast<int>(data.length()); i++){
		if(data[i] == '|')
			pipe++;
		if(!pipe){
			if(data[i] == '-' || isdigit(data[i]))
				n_date++;
		}
		else if(!isspace(data[i]) || data[i] == '.' || isdigit(data[i]))
			n_value++;
	}
	if(n_date > 10 || pipe > 1 || n_value < 1){
		std::cout << "error: bad input => " << data << " Expected: date | value" << std::endl;
 		return(false);
	}
	return(true);
}

bool	parse_lign(std::string data){

	if(check_format(data) == true){
		if(check_date_format(data) == true){
			if(check_value_format(data) == true){
				return(true);
			}
			else
				return(false);
		}
		else
			return(false);
	}
	else
		return(false);
}

int main(int ac, char **av){

	BitcoinExchange data;
	(void)av;
	if(ac == 2){
		try{
			data.set_map();
			std::fstream in;
			in.open(av[1]);
			if(!in.is_open()){
				throw(std::runtime_error("file not open"));
			}
			std::string buff;
			while(getline(in, buff)){
				if(parse_lign(buff) == true)
					data.search(buff);
			}
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
			return(0);
		}
	}
	else{
		std::cout << "error: numbers of argument" << std::endl;
	}
	return(1);
}