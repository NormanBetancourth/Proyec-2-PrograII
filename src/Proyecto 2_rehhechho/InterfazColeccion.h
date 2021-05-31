//
// Created by norma on 30/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_INTERFAZCOLECCION_H
#define PROYECTO_2_REHHECHHO_INTERFAZCOLECCION_H


#include<iostream>
#include"InterfazIterator.h"
using namespace std;
template<class T>
class InterfazColeccion {
public:
    virtual void insertarAlFinal(T* elemento) = 0;
    virtual int getCantidad() = 0;
    virtual InterfazIterator<T>* createIterador() = 0;
    virtual ~InterfazColeccion() = default;


};


#endif //PROYECTO_2_REHHECHHO_INTERFAZCOLECCION_H
