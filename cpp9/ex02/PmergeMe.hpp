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
	
		void							setVec(std::string arg);
		void							setLst(std::string arg);
		void							setStart();
		void							setTimeVec();
		void							setTimeLst();
		std::vector<int> const			&getVec() const;
		std::list<int> const			&getLst() const;
		std::vector<int> 				generateJacob(int n);

		void							vecSort(std::string arg);
		std::vector<int>				recursiveSortVec(std::vector<int> arg);
		std::vector<int> 				mergeWithJacob(std::vector<int> minValue, std::vector<int> maxValue);
//		void							lstSort(std::string arg);
//		void							recursiveSortLst(std::list<int> arg);

	private:
		long				_start;
		long				_timeVec;
		long				_timeLst;
		std::vector<int>	_vec;
		std::list<int>		_lst;
};

long int	timer(void);

#endif