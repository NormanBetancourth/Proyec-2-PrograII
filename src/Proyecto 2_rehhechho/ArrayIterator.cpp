//
// Created by norma on 2/6/2021.
//

#include "ArrayIterator.h"
template<class T>
ArrayIterator<T>::ArrayIterator(T **vector, int can) {
    this->vector=vector;
    this->can=can;
    this->posActual=0;
}

template<class T>
T *ArrayIterator<T>::getFirst() {
    if(this->isThereNext()){
        T* ele = this ->vector[this->posActual];
        this->posActual++;
        return ele;
    }
    return nullptr;
}

template<class T>
bool ArrayIterator<T>::isThereNext() {
    if(posActual >= this->can){
        return false;
    }
    else{
        return true;
    }
}
