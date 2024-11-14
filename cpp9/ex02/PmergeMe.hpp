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
	
		void				setVec(std::string arg);
		void				setLst(std::string arg);
		void				setStartVec();
		void				setStartLst();
		void				setEndVec();
		void				setEndLst();
		std::vector<int> const	&getVec() const;
		std::list<int> const	&getLst() const;
		
		long				timeWork(int type);
		void				recursiveSortVec();
		void				recursiveSortLst();

	private:
		long				_startVec;
		long				_endVec;
		long				_startLst;
		long				_endLst;
		std::vector<int>	_vec;
		std::list<int>		_lst;
};

long int	timer(void);

#endif