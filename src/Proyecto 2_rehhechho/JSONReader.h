//
// Created by rebec on 2/6/2021.
//

#ifndef JSON_HPP_JSONREADER_H
#define JSON_HPP_JSONREADER_H
#include"JSONTransformer.h"
#include"IFiles.h"
#include<fstream>

template<class T>
class JSONReader: public IReader<T> {
private:
    fstream entry;
public:
    JSONReader(string);
    ~JSONReader();
    ArrayTemplate<T>* readAll();
};

template<class T>
JSONReader<T>::JSONReader(string filePath) {
    this->entry.open(filePath, ios::in);
    if(!entry.good()){
        throw invalid_argument("The file path is not valid!\n");
    }

}

template<class T>
JSONReader<T>::~JSONReader() {
    this->entry.close();
}

template<class T>
ArrayTemplate<T> *JSONReader<T>::readAll() {
    json JsonModel;
    this->entry >> JsonModel;
    ArrayTemplate<T>* objects = new ArrayTemplate<T>(SIZE2);
    //*objects = JsonModel.get<>();
    return objects;
}



#endif //JSON_HPP_JSONREADER_H
