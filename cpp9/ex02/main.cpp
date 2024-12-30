#include "PmergeMe.hpp"

std::string	regroup(char **av, int ac){
	std::string result = av[1];
	if(ac > 2){
		for(int i = 2; i < ac; i++){
			result.append(1, ' ');
			result.append(av[i]);
		}
	}
	return(result);
}

bool	parse(std::string arg){
	std::stringstream ss(arg);
	std::string buff;
	int nbr = 0;

	while(getline(ss, buff, ' ')){
		for(size_t i = 0; i < buff.size(); i++){
			if(buff[i] == '-'){
				std::cout << "error: " << buff << " is a negative int" << std::endl;
				return(false);
			}
			if(!isdigit(buff[i])){
				std::cout << "error: " << buff << " is a wrong argument" << std::endl;
				return(false);
			}
		}
		double tmp = strtod(buff.c_str(), NULL);
		if(tmp > 2147483647 || tmp < 0){
			std::cout << "error: " << tmp << " isn't a int" << std::endl;
			return(false);
		}
		nbr++;
	}
	if(nbr < 2){
		std::cout << "not enough number to sort" << std::endl;
		return(false);
	}
	return(true);
}

std::string reduce_len(std::string str){
	int count = 0;
	size_t i = 0;
	std::string result;
	for(; i < str.size() && count < 10; i++){
		if(str[i] == ' ')
			count++;
	}
	result = str.substr(0, i);
	if(count == 10){
		result += "[...]";
	}
	return(result);
}

int main(int ac, char **av){
	if(ac > 1){
		PmergeMe sorter;
		std::string arg = regroup(av, ac);
		if(!parse(arg))
			return (0);
		std::cout << "before: " << reduce_len(arg) << std::endl;
		sorter.vecSort(arg);
		sorter.dqSort(arg);
	}
	else
		std::cerr << "error: nothing to sort" << std::endl;
}