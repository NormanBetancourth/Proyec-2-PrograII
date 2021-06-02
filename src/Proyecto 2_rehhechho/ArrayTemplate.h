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
//#include "Mediator.h"
using namespace std;

//TODO revisar size y num
//SIZE1 para pacientes, SIZE2 para enfermedades
const int SIZE1 = 100;
const int SIZE2 = 30;

//:::::::::::   CASO ESPECIAL    :::::::::::::::
//:::::::::::   CLASE TEMPLATE ESPECIALIZADA PARA ARRAY STRING   :::::::::::::::
//TODO para seguir manteniendo la idea de template, esta plantilla se puede hacer para
// datos simples, por ej string, int, ...
template <class string>
class ArrayTemplateString{
private:
    string* vector;
    int num;
    int size;
public:
    ArrayTemplateString(int);
    ~ArrayTemplateString();
    void setNum(int);
    int getSize() const;
    int getNum() const;
    bool addObject(string);
    bool empty();
    string toString() const;
    string getInPos(int)const;

};

template<class string>
ArrayTemplateString<string>::ArrayTemplateString(int opt) {
    size = (opt > 0) ? SIZE1 : SIZE2;
    num = 0;
    vector = new string [getSize()];

    //for (int i = 0; i < getSize(); i++) {
    //    vector[i] = '\n';
    //}
}

template<class string>
ArrayTemplateString<string>::~ArrayTemplateString() {
    for (int i = 0; i < getNum(); i++) {
        //if (vector[i]) {
            //vector[i] = '0';
        //}
    }
    //delete[] vector;
    setNum(0);

}

template<class string>
void ArrayTemplateString<string>::setNum(int num) {
    this->num = num;
}

template<class string>
int ArrayTemplateString<string>::getSize() const {
    return size;
}

template<class string>
int ArrayTemplateString<string>::getNum() const {
    return num;
}

template<class string>
bool ArrayTemplateString<string>::addObject(string line) {
    if (getNum() < getSize()) {
        vector[getNum()] = line;
        setNum(getNum() + 1);
        return true;
    }
    return false;
}

template<class string>
bool ArrayTemplateString<string>::empty() {
    for (int i = 0; i < getNum(); i++) {
        if (vector[i] == nullptr)
            return true;
    }
    return false;
}

template<class string>
string ArrayTemplateString<string>::toString() const {
    stringstream ss;
    ss << "\nArray List Information\n";
    for(int i = 0; i < getNum(); i++){
        ss << vector[i] << "\n";
    }
    return ss.str();
}

template<class string>
string ArrayTemplateString<string>::getInPos(int pos) const {
    for(int i=0;i<getSize();i++){
        if(i == pos){
            return vector[i];
        }
    }
    return nullptr;
}


//:::::::::::   CLASE ARRAY TEMPLATE GENERALIZADA   :::::::::::::

template <class T>
class ArrayTemplate{
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
    void analisis1(ArrayTemplate<Disease>* DVect);
    void analisis2(Patient*);

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
    ss << "\nArray List Information\n";
    for(int i = 0; i < getNum(); i++){
        ss << vector[i]->toStringSimple()<< "\n";
    }
    return ss.str();
}

template<class T>
void ArrayTemplate<T>::analisis1(ArrayTemplate<Disease> *DVect) {
    cout<<"Persona con enfermedades\n";
    for(int i = 0; i < getNum(); i++){
        DVect->analisis2(vector[i]);
    }
}

template<class T>
void ArrayTemplate<T>::analisis2(Patient *P) {
    string DNAsec = P->getADNsequence();//sobre lo que vamos a buscar matches.
    string match;//el auxiliar que vamos ir usando, este sera cada code de enfermedad.
    cout<<P->getName()<<endl;
    cout<<"Enfermedades\n";
    for(int i = 0; i < getNum(); i++){
        match = vector[i]->getADNsequence();
        if(DNAsec.find(match)!= string::npos ){
            cout<<vector[i]->getName()<<endl;
            P->addDisease(vector[i]->getName());
        }

    }
    cout<<"\n";
}





//template<class T>
//void ArrayTemplate<T>::setMediator(Mediator *m) {
//    for(int i = 0; i < getNum(); i++){
//        vector[i]->setMediator(m);
//    }
//}



#endif //PROYECTO_2_REHHECHHO_ARRAYTEMPLATE_H
