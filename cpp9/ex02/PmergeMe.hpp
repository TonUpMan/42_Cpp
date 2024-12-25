#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
#include <sstream>
#include <stdexcept>
#include <iomanip>

class PmergeMe{

	public:
		PmergeMe();
		PmergeMe(PmergeMe const &cpy);
		~PmergeMe();
		PmergeMe const &operator=(PmergeMe const &rhs);
	
		void							setVec(std::string arg);
		void							setDq(std::string arg);
		void							setStart();
		void							setTimeVec();
		void							setTimeDq();
		std::vector<int> const			&getVec() const;
		std::deque<int> const			&getDq() const;

		void							vecSort(std::string arg);
		std::vector<int>				recursiveSortVec(std::vector<int> arg);
		std::vector<int> 				insertMergeVec(std::vector<int> minValue, std::vector<int> maxValue);
		std::vector<std::vector<int> >	createGroupVec(std::vector<int> minValue);

		void							printTimeVec();

		void							dqSort(std::string arg);
		std::deque<int>					recursiveSortDq(std::deque<int> arg);
		std::deque<int>					insertMergeDq(std::deque<int> minValue, std::deque<int> maxValue);
		std::deque<std::deque<int> >	createGroupDq(std::deque<int> minValue);

		void							printTimeDq();

		std::vector<int>				seqGenerateVec(int n);
		std::deque<int>					seqGenerateDq(int n);

	private:
		double				_start;
		double				_timeVec;
		double				_timeDq;
		std::vector<int>	_vec;
		std::deque<int>		_dq;
};

double	timer(void);

#endif