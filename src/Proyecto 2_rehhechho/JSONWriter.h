//
// Created by rebec on 2/6/2021.
//

#ifndef JSON_HPP_JSONWRITER_H
#define JSON_HPP_JSONWRITER_H
#include<fstream>
#include"IFiles.h"
#include"JSONTransformer.h"

template<class T>
class JSONWriter: public IWriter<T> {
private:
    string filePath;
    json JsonModel;
public:
    JSONWriter(string);
    ~JSONWriter();
    void write(T* element);
    void writeAll(ArrayTemplate<T>* elements);
    void close();
};

template<class T>
JSONWriter<T>::JSONWriter(string filePath):filePath(filePath), JsonModel(json::array()){

}

template<class T>
JSONWriter<T>::~JSONWriter() {
    this->close();
}

template<class T>
void JSONWriter<T>::write(T* element) {
    //estrategias de conversion
    json JsonElement = element; //arreglo // objeto //valor simple
    this->JsonModel.push_back(JsonElement);
}

template<class T>
void JSONWriter<T>::writeAll(ArrayTemplate<T> *elements) {
    for(int i=0;i<elements->getNum();i++){
        this->write(elements->returnObjectPos(i));
    }
}

template<class T>
void JSONWriter<T>::close() {
    ofstream exitt;
    exitt.open(filePath, ios::out);
    if(!exitt.good()){
        throw invalid_argument("The file path is not valid!");
    }
    exitt << JsonModel; //serializacion
}



#endif //JSON_HPP_JSONWRITER_H
