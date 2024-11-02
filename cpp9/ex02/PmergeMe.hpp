#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <sstream>
#include <stdexcept>

class PmergeMe{

	public:
		PmergeMe();
		PmergeMe(PmergeMe const &cpy);
		~PmergeMe();
		PmergeMe const &operator=(PmergeMe const &rhs);
		std::vector<int>	container1;
		std::list<int>		container2;
};

#endif