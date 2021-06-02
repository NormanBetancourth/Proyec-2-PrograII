//
// Created by rebec on 2/6/2021.
//

#ifndef JSON_HPP_SIMPLEARRAYTEMPLATE_H
#define JSON_HPP_SIMPLEARRAYTEMPLATE_H
#include<iostream>
#include<sstream>
using namespace std;

//:::::::::::   CLASE TEMPLATE ESPECIALIZADA PARA DATOS SIMPLES   :::::::::::::::

template <class T>
class SimpleArrayTemplate{
private:
    T* vector;
    int num;
    int size;
public:
    SimpleArrayTemplate();
    ~SimpleArrayTemplate();
    void setNum(int);
    int getSize() const;
    int getNum() const;
    bool addObject(const T);
    bool empty();
    string toString() const;
    T getInPos(int)const;
};

template<class T>
SimpleArrayTemplate<T>::SimpleArrayTemplate() {
    size = 100;
    num = 0;
    vector = new string [getSize()];

    //for (int i = 0; i < getSize(); i++) {
    //    vector[i] = '\n';
    //}
}

template<class T>
SimpleArrayTemplate<T>::~SimpleArrayTemplate() {
    for (int i = 0; i < getNum(); i++) {
        //if (vector[i]) {
        //vector[i] = '0';
        //}
    }
    //delete[] vector;
    setNum(0);

}

template<class T>
void SimpleArrayTemplate<T>::setNum(int num) {
    this->num = num;
}

template<class T>
int SimpleArrayTemplate<T>::getSize() const {
    return size;
}

template<class T>
int SimpleArrayTemplate<T>::getNum() const {
    return num;
}

template<class T>
bool SimpleArrayTemplate<T>::addObject(T line) {
    if (getNum() < getSize()) {
        vector[getNum()] = line;
        setNum(getNum() + 1);
        return true;
    }
    return false;
}

template<class T>
bool SimpleArrayTemplate<T>::empty() {
    for (int i = 0; i < getNum(); i++) {
        if (vector[i] == nullptr)
            return true;
    }
    return false;
}

template<class T>
string SimpleArrayTemplate<T>::toString() const {
    stringstream ss;
    //ss << "\nArray List Information\n";
    for(int i = 0; i < getNum(); i++){
        ss << vector[i] << "\n";
    }
    return ss.str();
}

template<class T>
T SimpleArrayTemplate<T>::getInPos(int pos) const {
    for(int i = 0 ; i < getSize(); i++){
        if(i == pos){
            return vector[i];
        }
    }
    return nullptr;
}




#endif //JSON_HPP_SIMPLEARRAYTEMPLATE_H
