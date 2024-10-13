
template<typename T>
const char *Array<T>::IndexError::what() const throw(){
    return ("out of bounds");
}

template<typename T>
Array<T>::Array(void){
    n = 0;
    content = new T[0]();
}

template<typename T>
Array<T>::Array(unsigned int n) : n(n){
    content = new T[n]();
}

template<typename T>
Array<T>::Array(Array const &cpy){
    n = cpy.n;
    content = new T[n]();
    for(unsigned int i = 0; i < n; i++){
        content[i] = cpy.content[i];
    }
}

template<typename T>
Array<T>::~Array(){
    delete[] content;
}

template<typename T>
Array<T> const &Array<T>::operator=(Array const &cpy){
    if(this != &cpy){
        delete[] content;
        n = cpy.n;
        content = new T[n]();
        for(unsigned int i = 0; i < n; i++){
            content[i] = cpy.content[i];
        }
    }
    return (*this);
}

template<typename T>
T  &Array<T>::operator[](unsigned int index){
    if (index < n)
        return(content[index]);
    else
        throw(IndexError());
}

template<typename T>
unsigned int    Array<T>::size(void){
    return(n);
}