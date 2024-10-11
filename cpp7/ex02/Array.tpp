
template<typename T>
Array<T>::Array(void) : content(NULL), size(0){}

template<typename T>
Array<T>::Array(unsigned int n){
    if (n > 0){
        content = new T[n]();
        size = n;
    }
    else{
        content = NULL;
        size = 0;
    }
}

template<typename T>
Array<T>::Array(T const &cpy){
    size = cpy.size;
    content = new[size]();
    for(int i = 0; i < size; i++)
        content[i] = cpy.content[i];
    
}

template<typename T>
Array<T>::~Array(){
    delete[] content;
}

template<typename T>
Array const &Array<T>::operator=(T const &cpy){
    if(this != &cpy){
        delete[] content;
        size = cpy.size;
        content = new T[size]();
        for(int i = 0; i < cpy.size; i++)
            content[i] = cpy.content[i];
    }
    return (*this);
}

template<typename T>
T const &Array<T>::operator[](unsigned int n){
    if (n >= 0 && n <= size)
        return(content[n]);
    else
        throw(std::execption);
}

template<typename T>
unsigned int    Array<T>::size(void){
    return(size);
}