#include "PmergeMe.hpp"
# include <sys/time.h>

////////////////////////////////////////////////////////////
template<typename T>
void	print(T cont){
	for(typename T::iterator it = cont.begin(); it != cont.end(); it++){
		std::cout << *it << ", ";
	}
	std::cout << std::endl;
}
////////////////////////////////////////////////////////////

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

void	PmergeMe::setStart(){_start = timer();}

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

void	PmergeMe::setTimeVec(){_timeVec = timer() - _start;}
void	PmergeMe::setTimeLst(){_timeLst = timer() - _start;}

std::vector<int> const	&PmergeMe::getVec() const{return(_vec);}
std::list<int> const	&PmergeMe::getLst() const{return(_lst);}

long int	timer(void){

	struct timeval	tv;
	long int		tmp;

	gettimeofday(&tv, NULL);
	tmp = tv.tv_sec * 1000 + tv.tv_usec / 1000;
	return (tmp);
}

void				PmergeMe::vecSort(std::string arg){
	setStart();
	setVec(arg);
	std::vector<int> result;
	result = recursiveSortVec(_vec);
	setTimeVec();
}


std::vector<int>	PmergeMe::recursiveSortVec(std::vector<int> arg){

	std::vector<int>	minValue;
	std::vector<int>	maxValue;

	for(size_t i = 0; i < arg.size() - 1; i += 2){
		int min = _vec[i];
		int max = _vec[i + 1];
		if(min > max)
			std::swap(min, max);
		minValue.push_back(min);
		maxValue.push_back(max);
	}
	if(maxValue.size() > 1)
		recursiveSortVec(maxValue);
	std::vector<int> result;
	result = mergeWithJacob(minValue, maxValue);
	return(result);
}

std::vector<int>	PmergeMe::generateJacob(int n){
    std::vector<int> jacobsthal;
    jacobsthal.push_back(0);
    jacobsthal.push_back(1);

    for (int i = 2; i < n; ++i) {
        int next = jacobsthal[i-1] + 2 * jacobsthal[i-2];
        jacobsthal.push_back(next);
    }
    return (jacobsthal);
}


std::vector<int> PmergeMe::mergeWithJacob(std::vector<int> minvalue, std::vector<int> maxvalue) {
	std::vector<int> jacobsthal = generateJacob(minvalue.size() + maxvalue.size());
    std::vector<int> result(minvalue.size() + maxvalue.size());
    size_t minIdx = 0, maxIdx = 0;

    for (size_t i = 0; i < result.size(); ++i) {
        if (minIdx < minvalue.size() && (maxIdx >= maxvalue.size() || jacobsthal[i] % 2 == 0)) {
            // Insert from minvalue
            result[i] = minvalue[minIdx++];
        } else if (maxIdx < maxvalue.size()) {
            // Insert from maxvalue
            result[i] = maxvalue[maxIdx++];
        }
    }

    // Gestion des restes si nécessaire
    while (minIdx < minvalue.size()) {
        result.push_back(minvalue[minIdx++]);
    }
    while (maxIdx < maxvalue.size()) {
        result.push_back(maxvalue[maxIdx++]);
    }
	print(result);
    return result;
}


//void				lstSort(std::string arg){}
//std::list				*initLstPair(){}
//void	PmergeMe::recursiveSortLst(){}
