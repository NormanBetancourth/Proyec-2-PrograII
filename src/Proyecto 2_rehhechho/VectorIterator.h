//
// Created by norma on 30/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_VECTORITERATOR_H
#define PROYECTO_2_REHHECHHO_VECTORITERATOR_H


#include"InterfazIterator.h"
#include"ArrayTemplate.h"
using namespace std;
template<class T>
class VectorIterador: public InterfazIterator<T> {
private:
    T** coleccionVector;
    int cantidad;
    int posicionActual;
public:
    VectorIterador(T** coleccionVector, int cant);
    T* getFirst();
    bool isThereNext();
};

#endif //PROYECTO_2_REHHECHHO_VECTORITERATOR_H
