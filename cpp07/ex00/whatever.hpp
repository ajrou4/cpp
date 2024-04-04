#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>

class whatever
{   
    public:
        whatever(){}
        whatever(const whatever &src);
        whatever& operator=(const whatever &src);
        ~whatever();

};
template <typename T>
whatever<T>::whatever(){}
template <typename T>
whatever<T>::whatever(const whatever &src){
    (void)src;
}
template <typename T>
whatever<T> &whatever<T>::operator=(const whatever &src){
    (void)src;
    return *this;
}
template <typename T>
whatever<T>::~whatever(){
}
template <typename T>
void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}
template <typename T>
T max(T &a, T &b){
    if(a > b)
        return a;
    return b;
}
template <typename T>
T min(T &a, T &b){
    if(a < b)
        return a;
    return b;
}

#endif