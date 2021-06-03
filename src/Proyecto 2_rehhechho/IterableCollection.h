//
// Created by norma on 2/6/2021.
//

#ifndef PROYECTO_2_REHHECHHO_ITERABLECOLLECTION_H
#define PROYECTO_2_REHHECHHO_ITERABLECOLLECTION_H
#include "Iterator.h"

using namespace std;

template<class T>
class IterableCollection {
    virtual Iterator<T>* createIterador() = 0;
};


#endif //PROYECTO_2_REHHECHHO_ITERABLECOLLECTION_H
