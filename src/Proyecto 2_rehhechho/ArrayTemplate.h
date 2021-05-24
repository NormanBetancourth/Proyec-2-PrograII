//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_ARRAYTEMPLATE_H
#define PROYECTO_2_REHHECHHO_ARRAYTEMPLATE_H


#include<iostream>
#include<sstream>
#include "Mediator.h"
using namespace std;

//SIZE1 para pacientes, SIZE2 para enfermedades
const int SIZE1 = 100;
const int SIZE2 = 30;

template <class T>
class ArrayTemplate{
private:
    T** vector;
    int num;
    int size;
public:
    ArrayTemplate(int = 0);
    ~ArrayTemplate();

    void setNum(int);
    int getSize() const;
    int getNum() const;
    void moveToLeft(int);
    void deleteObject(string);
    bool verifyObject(string);
    bool addObject(T*);
    T* returnObject(string);
    bool empty();
    string toString() const;
    void setMediator(Mediator*m);
};


#endif //PROYECTO_2_REHHECHHO_ARRAYTEMPLATE_H