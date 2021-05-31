//
// Created by norma on 30/5/2021.
//

#include "VectorIterator.h"
template<class T>
VectorIterador<T>::VectorIterador(T **coleccionVector, int cantidad) {
    this -> coleccionVector = coleccionVector;
    this -> cantidad = cantidad;
    this -> posicionActual = 0;
}

template<class T>
T *VectorIterador<T>::getFirst() {
    if(this->isThereNext()){
        T* ele = this ->coleccionVector[this->posicionActual];
        this->posicionActual++;
        return ele;
    }
    return nullptr;
}
template<class T>
bool VectorIterador<T>::isThereNext() {
    if(posicionActual >= this->cantidad){
        return false;
    }
    else{
        return true;
    }
}