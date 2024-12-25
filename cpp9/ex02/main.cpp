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
		std::cout << "before: " << reduce_len(arg) << std::endl;
		sorter.vecSort(arg);
		sorter.dqSort(arg);
	}
	else
		std::cerr << "error: nothing to sort" << std::endl;
}