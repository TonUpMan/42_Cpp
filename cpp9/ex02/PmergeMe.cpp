#include "PmergeMe.hpp"
# include <sys/time.h>

////////////////////////////////////////////////////////////
template<typename T>
void	print(T cont){
	for(typename T::iterator it = cont.begin(); it != cont.end(); it++){
		std::cout << *it << std::endl;
	}
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

void	PmergeMe::setStartVec(){_startVec = timer();}
void	PmergeMe::setStartLst(){_startLst = timer();}
void	PmergeMe::setEndVec(){_endVec = timer();}
void	PmergeMe::setEndLst(){_endLst = timer();}

std::vector<int> const	&PmergeMe::getVec() const{return(_vec);}
std::list<int> const	&PmergeMe::getLst() const{return(_lst);}

long	PmergeMe::timeWork(int type){

	long result;
	
	if(type)
		result = _endVec - _startVec;
	else
		result = _endLst - _startLst;
	return(result);
}

long int	timer(void){

	struct timeval	tv;
	long int		tmp;

	gettimeofday(&tv, NULL);
	tmp = tv.tv_sec * 1000 + tv.tv_usec / 1000;
	return (tmp);
}

void	PmergeMe::recursiveSortVec(){
	
}

void	PmergeMe::recursiveSortLst(){

}
