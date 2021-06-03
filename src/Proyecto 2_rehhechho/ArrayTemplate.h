//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_ARRAYTEMPLATE_H
#define PROYECTO_2_REHHECHHO_ARRAYTEMPLATE_H
#include<iostream>
#include<sstream>
#include<string>
#include<Disease.h>
#include<Patient.h>

#include<IterableCollection.h>
#include<ArrayIterator.cpp>
using namespace std;

//SIZE1 para pacientes, SIZE2 para enfermedades
const int SIZE1 = 100;
const int SIZE2 = 30;

//:::::::::::   CLASE ARRAY TEMPLATE GENERALIZADA   :::::::::::::

template <class T>
class ArrayTemplate: public IterableCollection<T>{
private:
    T** vector;
    int num;
    int size;
public:
    ArrayTemplate(int);
    ~ArrayTemplate();
    void setNum(int);
    int getSize() const;
    int getNum() const;
    void moveToLeft(int);
    void deleteObject(string);
    bool verifyObject(string);
    bool addObject(T*);
    T* returnObject(string);
    T* returnObjectPos(int);
    bool empty();
    string toString() const;
    void analisis2(Patient*);
    T** getData();
    Iterator<T>* createIterador();
    /**
     * Usamos el iterador para respetar la generalidad del template, y realizamos
     * los metodos especificos necesarios para cada clase fuera, en analyst, asi
     * evitamos problemas de ejecucion
     * **/
    void sort();
};

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
            vector[i] = nullptr;
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
}

template<class T>
void ArrayTemplate<T>::deleteObject(string id) {
    stringstream ss;
    for (int i = 0; i < getNum(); i++) {
        if (verifyObject(id)) {
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
bool ArrayTemplate<T>::addObject(T* myObject) {
    if (getNum() < getSize()) {
        vector[getNum()] = myObject;
        setNum(getNum() + 1);
        return true;
    }
    return false;
}

template<class T>
T *ArrayTemplate<T>::returnObject(string id) {
    for (int i = 0; i < getNum(); i++){
        if(vector[i]->getId() == id){
            return vector[i];
        }
    }
    return nullptr;
}

template<class T>
T *ArrayTemplate<T>::returnObjectPos(int pos) {
    for(int i=0;i<getNum();i++){
        if(i == pos){
            return vector[i];
        }
    }
    return nullptr;
}

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
    stringstream ss;
    for(int i = 0; i < getNum(); i++){
        ss << vector[i]->toString() << "\n";
    }
    return ss.str();
}





template<class T>
void ArrayTemplate<T>::analisis2(Patient* P) {
    string DNAsec = P->getADNsequence();//sobre lo que vamos a buscar matches.
    string match;//el auxiliar que vamos ir usando, este sera cada code de enfermedad.
    for(int i = 0; i < getNum(); i++){
        match = vector[i]->getADNsequence();
        if(DNAsec.find(match)!= string::npos ){
            P->getDiseaseArray()->addObject(vector[i]->getName());
        }

    }
}

template<class T>
T **ArrayTemplate<T>::getData() {
    return vector;
}

template<class T>
Iterator<T> *ArrayTemplate<T>::createIterador() {
    return new ArrayIterator<T>(vector,num);
}

template<class T>
void ArrayTemplate<T>::sort() {
    T* temp;
    for (int i = 0; i <getNum() -1; ++i) {
        for (int j = i +1; j < getNum(); ++j) {
            if (vector[i]->sortData()< vector[j]->sortData()){
                temp = vector[i];
                vector[i]= vector[j];
                vector[j]= temp;
            }
        }
    }
}


#endif //PROYECTO_2_REHHECHHO_ARRAYTEMPLATE_H
