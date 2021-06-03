//
// Created by norma on 2/6/2021.
//

#ifndef PROYECTO_2_REHHECHHO_ARRAYITERATOR_H
#define PROYECTO_2_REHHECHHO_ARRAYITERATOR_H
#include "Iterator.h"
template<class T>
class ArrayIterator: public Iterator<T> {
private:
    T** vector;
    int can;
    int posActual;
public:
    ArrayIterator(T** vector, int can);
    T*  getFirst();
    bool isThereNext();


};




#endif //PROYECTO_2_REHHECHHO_ARRAYITERATOR_H
