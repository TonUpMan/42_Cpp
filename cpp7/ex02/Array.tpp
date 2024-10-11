
template<typename T>
const char *Array<T>::IndexError::what() const throw(){
    return ("out of bounds");
}

template<typename T>
Array<T>::Array(void) : content(NULL), n(0){}

template<typename T>
Array<T>::Array(unsigned int n) : n(n){
    if (n > 0)
        content = new T[n]();
    else
        content = NULL;
}

template<typename T>
Array<T>::Array(T const &cpy) : n(cpy.n){
    content = new T[n]();
    for(int i = 0; i < n; i++)
        content[i] = cpy.content[i];
    
}

template<typename T>
Array<T>::~Array(){
    delete[] content;
}

template<typename T>
Array<T> const &Array<T>::operator=(T const &cpy){
    if(this != &cpy){
        delete[] content;
        n = cpy.n;
        content = new T[n]();
        for(int i = 0; i < n; i++)
            content[i] = cpy.content[i];
    }
    return (*this);
}

template<typename T>
T const &Array<T>::operator[](unsigned int n){
    if (n >= 0 && n <= this.n)
        return(content[n]);
    else
        throw(IndexError());
}

template<typename T>
unsigned int    Array<T>::size(void){
    return(n);
}