//
// Created by rebec on 27/5/2021.
//

#include "JsonWriter.h"

template<class T>
JsonWriter<T>::JsonWriter(string filePath):filePath(filePath), jsonModel(json::array()) {

}

template<class T>
JsonWriter<T>::~JsonWriter() {
    this->close();
}

template<class T>
void JsonWriter<T>::write(T element) {
    json jsonElemen = element;
    this->jsonModel.push_back(jsonElemen);
}

template<class T>
void JsonWriter<T>::writeAll(ArrayTemplate<T> *elements) {
    for(auto& actual : *elements){
        this->write(actual);
    }
}

template<class T>
void JsonWriter<T>::close() {
    ofstream exit;
    exit.open(filePath, ios::out);
    if(!exit.good()){
        throw invalid_argument("The file path is not valid");
    }
    exit << jsonModel;
}

