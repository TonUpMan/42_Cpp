#include "PmergeMe.hpp"
# include <sys/time.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void	print(T cont){
	if(cont.size() <= 15){
		typename T::iterator it;
		for(it = cont.begin(); it != cont.end(); it++){
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}
	else{
		int limit = 5;
		typename T::iterator it;
		for(it = cont.begin(); limit; it++){
			std::cout << *it << " ";
			limit--;
		}
		std::cout << "[...]";
		limit = 5;
		typename T::reverse_iterator rit;
		for(rit = cont.rbegin(); limit > 0 && rit != cont.rend(); --rit){
			std::cout << *rit << " ";
			limit--;
		}
		std::cout<< std::endl;
	}
}

template <typename T>
T	sequenceGenerate(int n, int start){
	T sequence;
	sequence.push_back(0);
	sequence.push_back(start);
	for(int i = 2; i < n; i++){
		int tmp = sequence[i - 1] + (2 * sequence[i - 2]);
		sequence.push_back(tmp);
	}
	return(sequence);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(PmergeMe const &cpy){
	*this = cpy;
}

PmergeMe::~PmergeMe(){}

PmergeMe const &PmergeMe::operator=(PmergeMe const &rhs){

	if(this != &rhs){
		_vec = rhs.getVec();
		_lst = rhs.getLst();
	}
	return(*this);
}

void	PmergeMe::setVec(std::string arg){

	std::stringstream 	ss(arg);
	std::string			buff;

	while(getline(ss, buff, ' ')){
		int	tmp = atoi(buff.c_str());
		_vec.push_back(tmp);
	}
}

void	PmergeMe::setLst(std::string arg){

	std::stringstream 	ss(arg);
	std::string			buff;

	while(getline(ss, buff, ' ')){
		int	tmp = atoi(buff.c_str());
		_lst.push_back(tmp);
	}
}

void	PmergeMe::setStart(){_start = timer();}
void	PmergeMe::setTimeVec(){_timeVec = timer() - _start;}
void	PmergeMe::setTimeLst(){_timeLst = timer() - _start;}

std::vector<int> const	&PmergeMe::getVec() const{return(_vec);}
std::list<int> const	&PmergeMe::getLst() const{return(_lst);}

void	PmergeMe::vecSort(std::string arg){
	setStart();
	setVec(arg);
	std::vector<int> result;
	result = recursiveSortVec(_vec);
	print(result);
	setTimeVec();
}

std::vector<int>	PmergeMe::recursiveSortVec(std::vector<int> arg){

	std::vector<int>	minValue;
	std::vector<int>	maxValue;

	for(size_t i = 0; i < arg.size() - 1; i += 2){
		int min = arg[i];
		int max = arg[i + 1];
		if(min > max)
			std::swap(min, max);
		minValue.push_back(min);
		maxValue.push_back(max);
	}
	if (arg.size() % 2 != 0){
    	int last = arg.back();
    	if (maxValue.empty() || last > *std::max_element(maxValue.begin(), maxValue.end()))
        	maxValue.push_back(last);
		else
       		minValue.push_back(last);
	}
	if(maxValue.size() > 1)
		maxValue = recursiveSortVec(maxValue);
	return(insertMerge(minValue, maxValue));
}

std::vector<int>	PmergeMe::insertMerge(std::vector<int> minValue, std::vector<int> maxValue){
	// if(minValue.size() == 1 && maxValue.size() == 1){
	// 	maxValue.insert(maxValue.begin(), minValue[0]);
	// 	return(maxValue);
	// }
	for(size_t i = 0; i < minValue.size(); i++){
		int start = 0;
		int end = maxValue.size();
		while(start <= end){
			int middle = start + ((end - start) / 2);
			if(minValue[i] == maxValue[middle]){
				start = middle;
				break ;
			}
			else if(minValue[i] < maxValue[middle])
				end = middle - 1;
			else
				start = middle + 1;
		}
		std::vector<int>::iterator it;
		for(it = maxValue.begin(); *it != maxValue[start]; it++)
			;
		maxValue.insert(it, minValue[i]);
	}
	return(maxValue);
}

long int	timer(void){

	struct timeval	tv;
	long int		tmp;

	gettimeofday(&tv, NULL);
	tmp = tv.tv_sec * 1000 + tv.tv_usec / 1000;
	return (tmp);
}