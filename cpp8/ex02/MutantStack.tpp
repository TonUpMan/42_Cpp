
template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &cpy) : std::stack<T>(cpy){}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
MutantStack<T> const &MutantStack<T>::operator=(MutantStack const &cpy){
    std::stack<T>::operator=(cpy);
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
    return(this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
    return(this->c.end());
}