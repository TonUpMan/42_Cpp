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

int main(int ac, char **av){

	if(ac > 1){
		PmergeMe sorter;
		std::string arg = regroup(av, ac);
	}
	else
		std::cerr << "error: nothing to sort" << std::endl;
}