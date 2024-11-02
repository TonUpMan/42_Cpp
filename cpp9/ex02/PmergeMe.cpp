#include "PmergeMe.hpp"


PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(PmergeMe const &cpy){
	*this = cpy;
}

PmergeMe::~PmergeMe(){}

PmergeMe const &PmergeMe::operator=(PmergeMe const &rhs){
	if(this != &rhs){
		container1 = rhs.container1;
		container2 = rhs.container2;
	}
	return(*this);
}

