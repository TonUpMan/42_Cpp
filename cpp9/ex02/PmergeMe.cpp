#include "PmergeMe.hpp"
# include <sys/time.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void	print(T cont){
	std::cout << "After: ";
	if(cont.size() <= 15){
		typename T::iterator it;
		for(it = cont.begin(); it != cont.end(); it++){
			std::cout << *it << " ";
		}
	}
	else{
		int limit = 10;
		typename T::iterator it;
		for(it = cont.begin(); limit; it++){
			std::cout << *it << " ";
			limit--;
		}
		std::cout << "[...]";
	}
	std::cout << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(PmergeMe const &cpy){
	*this = cpy;
}

PmergeMe::~PmergeMe(){}

PmergeMe const &PmergeMe::operator=(PmergeMe const &rhs){

	if(this != &rhs){
		_vec = rhs.getVec();
		_dq = rhs.getDq();
	}
	return(*this);
}

void	PmergeMe::setStart(){_start = timer();}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void	PmergeMe::setVec(std::string arg){

	std::stringstream 	ss(arg);
	std::string			buff;

	while(getline(ss, buff, ' ')){
		int	tmp = atoi(buff.c_str());
		_vec.push_back(tmp);
	}
}

std::vector<int> const	&PmergeMe::getVec() const{return(_vec);}

void	PmergeMe::setTimeVec(){_timeVec = timer() - _start;}

std::vector<int>	PmergeMe::seqGenerateVec(int n){
	std::vector<int> sequence;
	int tmp = 0;
	sequence.push_back(2);
	sequence.push_back(2);
	if(n <= 4)
		return(sequence);
	for(int i = 2; i < n && tmp <= n; i++){
		tmp = sequence[i - 1] + (2 * sequence[i - 2]);
		sequence.push_back(tmp);
	}
	return(sequence);
}

void	PmergeMe::vecSort(std::string arg){
	setStart();
	setVec(arg);
	std::vector<int> result;
	result = recursiveSortVec(_vec);
	setTimeVec();
	print(result);
	printTimeVec();
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
	return(insertMergeVec(minValue, maxValue));
}

std::vector<std::vector<int> >	PmergeMe::createGroupVec(std::vector<int> minValue){

	int	size = minValue.size();
	int j = 0;
	std::vector<int> sequence = seqGenerateVec(size);
	std::vector<std::vector<int> > result(sequence.size());
	for(size_t i = 0; i < sequence.size() && size; i++){
		int tmp = sequence[i];
		tmp += j;
		for(; j < tmp && size; j++){
			result[i].push_back(minValue[j]);
			size--;
		}
		std::reverse(result[i].begin(), result[i].end());
	}
	return(result);
}

std::vector<int>	PmergeMe::insertMergeVec(std::vector<int> minValue, std::vector<int> maxValue){
	std::vector<std::vector<int> > groups = createGroupVec(minValue);
	for(size_t g = 0; g < groups.size(); g++){
		for(size_t i = 0; i < groups[g].size(); i++){
			int start = 0;
			int end = maxValue.size();
			while(start <= end){
				int middle = start + ((end - start) / 2);
				if(groups[g][i] == maxValue[middle]){
					start = middle;
					break ;
				}
				else if(groups[g][i] < maxValue[middle])
					end = middle - 1;
				else
					start = middle + 1;
			}
			std::vector<int>::iterator it;
			for(it = maxValue.begin(); *it != maxValue[start]; it++)
				;
			maxValue.insert(it, groups[g][i]);
		}
	}
	return(maxValue);
}

void	PmergeMe::printTimeVec(){
	std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << std::fixed << std::setprecision(2) << _timeVec << " ns" << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void	PmergeMe::setTimeDq(){_timeDq = timer() - _start;}
std::deque<int> const	&PmergeMe::getDq() const{return(_dq);}

void	PmergeMe::setDq(std::string arg){

	std::stringstream 	ss(arg);
	std::string			buff;

	while(getline(ss, buff, ' ')){
		int	tmp = atoi(buff.c_str());
		_dq.push_back(tmp);
	}
}

std::deque<int>	PmergeMe::seqGenerateDq(int n){
	std::deque<int> sequence;
	int tmp = 0;
	sequence.push_back(2);
	sequence.push_back(2);
	if(n <= 4)
		return(sequence);
	for(int i = 2; i < n && tmp <= n; i++){
		tmp = sequence[i - 1] + (2 * sequence[i - 2]);
		sequence.push_back(tmp);
	}
	return(sequence);
}

void	PmergeMe::dqSort(std::string arg){
	setStart();
	setDq(arg);
	std::deque<int> result;
	result = recursiveSortDq(_dq);
	setTimeDq();
	printTimeDq();
}

std::deque<int>	PmergeMe::recursiveSortDq(std::deque<int> arg){

	std::deque<int>	minValue;
	std::deque<int>	maxValue;

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
		maxValue = recursiveSortDq(maxValue);
	return(insertMergeDq(minValue, maxValue));
}

std::deque<std::deque<int> >	PmergeMe::createGroupDq(std::deque<int> minValue){

	int	size = minValue.size();
	int j = 0;
	std::deque<int> sequence = seqGenerateDq(size);
	std::deque<std::deque<int> > result(sequence.size());
	for(size_t i = 0; i < sequence.size() && size; i++){
		int tmp = sequence[i];
		tmp += j;
		for(; j < tmp && size; j++){
			result[i].push_back(minValue[j]);
			size--;
		}
		std::reverse(result[i].begin(), result[i].end());
	}
	return(result);
}

std::deque<int>	PmergeMe::insertMergeDq(std::deque<int> minValue, std::deque<int> maxValue){
	std::deque<std::deque<int> > groups = createGroupDq(minValue);
	for(size_t g = 0; g < groups.size(); g++){
		for(size_t i = 0; i < groups[g].size(); i++){
			int start = 0;
			int end = maxValue.size();
			while(start <= end){
				int middle = start + ((end - start) / 2);
				if(groups[g][i] == maxValue[middle]){
					start = middle;
					break ;
				}
				else if(groups[g][i] < maxValue[middle])
					end = middle - 1;
				else
					start = middle + 1;
			}
			std::deque<int>::iterator it;
			for(it = maxValue.begin(); *it != maxValue[start]; it++)
				;
			maxValue.insert(it, groups[g][i]);
		}
	}
	return(maxValue);
}

void	PmergeMe::printTimeDq(){
	std::cout << "Time to process a range of " << _dq.size() << " elements with std::deque : " << _timeDq << " ns" << std::endl;
}

double	timer(void){

	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return(tv.tv_sec * 1000000.0 + tv.tv_usec);
}