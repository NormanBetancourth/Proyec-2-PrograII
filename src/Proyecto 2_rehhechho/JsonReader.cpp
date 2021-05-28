//
// Created by rebec on 28/5/2021.
//

#include "JsonReader.h"
template<class T>
JsonReader<T>::JsonReader(string filePath){
    this->input.open(filePath, ios::in);
    if(!input.good()){
        throw invalid_argument("The file path is not valid\n");

    }
}

template<class T>
ArrayTemplate<T> *JsonReader<T>::readAll() {
    json jsonModel;
    this->input >> jsonModel;
    ArrayTemplate<T>* objects = new ArrayTemplate<T>();
    objects = jsonModel.get<ArrayTemplate<T>>();
    return objects;
}

template<class T>
void JsonReader<T>::close() {
    this->input.close();
}
