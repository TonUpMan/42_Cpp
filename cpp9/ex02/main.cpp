#include "PmergeMe.hpp"

std::string	regroup(char **av, int ac){
	std::string result = av[1];
	if(ac > 2){
		for(int i = 2; i < ac; i++){
			result.append(1, ' ');
			result.append(av[i]);
		}
	}
}

void	sort_vector(std::string arg){
	PmergeMe sorter;
	std::stringstream ss(arg);
	std::string buff;
	while(getline(ss, buff, ' ')){
		int tmp = strtod(buff.c_str(), NULL);
		if (tmp < 0){
			std::cerr << "value must positive" << std::endl; 
			return ;
		}
		sorter.container1.push_back(tmp);
	}
	int n = sorter.container1.size() / 2;
	std::vector<int>	tab[n];
}

int main(int ac, char **av){

	if(ac > 1){
		PmergeMe sorter;
		std::string arg = regroup(av, ac);
		try{
			sort_vector(arg);
		}
		catch(std::exception &e){
			std::cerr << e.what() << std::endl;
			return(0);
		}
	}
	else
		std::cerr << "error: nothing to sort" << std::endl;
}