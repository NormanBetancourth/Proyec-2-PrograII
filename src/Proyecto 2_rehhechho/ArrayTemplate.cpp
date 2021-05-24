//
// Created by norma on 23/5/2021.
//

#include "ArrayTemplate.h"
//SIZE1 para pacientes, SIZE2 para enfermedades
template<class T>
ArrayTemplate<T>::ArrayTemplate(int opt) {
    size = (opt > 0) ? SIZE1 : SIZE2;
    num = 0;
    vector = new T * [getSize()];
    for (int i = 0; i < getSize(); i++) {
        vector[i] = nullptr;
    }
}

template<class T>
ArrayTemplate<T>::~ArrayTemplate() {
    for (int i = 0; i < getNum(); i++) {
        if (vector[i]) {
            delete vector[i];
        }
    }
    delete[] vector;
    setNum(0);
}

template<class T>
void ArrayTemplate<T>::setNum(int num) {
    this->num = num;
}

template<class T>
int ArrayTemplate<T>::getSize() const {
    return size;
}

template<class T>
int ArrayTemplate<T>::getNum() const {
    return num;
}

template<class T>
void ArrayTemplate<T>::moveToLeft(int position) {
    for (int i = position; i < getNum(); i++) {
        vector[i] = vector[i + 1];
    }
    vector[getNum() - 1] = nullptr;
}

template<class T>
void ArrayTemplate<T>::deleteObject(string id) {
    stringstream ss;
    for (int i = 0; i < getNum(); i++) {
        if (vector[i]->getId() == id) {
            delete vector[i];
            moveToLeft(i);
            setNum(getNum() - 1);
        }
    }
}

template<class T>
bool ArrayTemplate<T>::verifyObject(string id) {
    for (int i = 0; i < getNum(); i++) {
        if (vector[i]->getId() == id) {
            return true;
        }
    }
    return false;
}

template<class T>
bool ArrayTemplate<T>::addObject(T *myObject) {
    if (getNum() < getSize()) {
        vector[getNum()] = myObject;
        setNum(getNum() + 1);
        return true;
    }
    return false;}

template<class T>
T *ArrayTemplate<T>::returnObject(string id) {
    for (int i = 0; i < getNum(); i++){
        if(vector[i]->getId() == id){
            return vector[i];
        }
    }
    return nullptr;}

template<class T>
bool ArrayTemplate<T>::empty() {
    for (int i = 0; i < getNum(); i++) {
        if (vector[i] == nullptr)
            return true;
    }
    return false;
}

template<class T>
string ArrayTemplate<T>::toString() const {
    stringstream s;
    s << "\nArray List Information\n";
    for(int i = 0; i < getNum(); i++){
        s  << vector[i]->toString() << "\n";
    }
    return s.str();
}

template<class T>
void ArrayTemplate<T>::setMediator(Mediator *m) {
    for(int i = 0; i < getNum(); i++){
        vector[i]->setMediator(m);
    }
}
