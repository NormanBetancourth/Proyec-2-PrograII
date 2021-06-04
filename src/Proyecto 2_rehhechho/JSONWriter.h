//
// Created by rebec on 2/6/2021.
//

#ifndef JSON_HPP_JSONWRITER_H
#define JSON_HPP_JSONWRITER_H
#include<fstream>
#include"IFiles.h"
#include "JSONTransformer.h"

Json::StreamWriterBuilder builder; //utilizarlo para definirle parámetros
const unique_ptr<Json::StreamWriter> writer(builder.newStreamWriter());

template<class T>
class JSONWriter: public IWriter<T> {
private:
    string filePath;
    JSONTransformer<T>* transformer;
    ofstream exitt;

public:
    JSONWriter(const string&, JSONTransformer<T>*);
    ~JSONWriter();
    void write(T* element);
    void writeAll(ArrayTemplate<T>* elements);
    void close();

    JSONTransformer<T> *getTransformer() const;
    void setTransformer(JSONTransformer<T> *);
};

template<class T>
JSONWriter<T>::JSONWriter(const string& filePath, JSONTransformer<T>* transformer):
        filePath(filePath), transformer(transformer){
    this->exitt.open(filePath);
    if(!exitt.good()){
        throw invalid_argument("The file path is not valid!");
    }
}

template<class T>
JSONWriter<T>::~JSONWriter() {
    this->exitt.close();
    if(getTransformer()){
        delete getTransformer();
    }
}

template<class T>
void JSONWriter<T>::writeAll(ArrayTemplate<T> *elements) {
    Json::Value array(Json::arrayValue);
    builder["commentStyle"] = "None";
    builder["identation"] = "";
    for(int i=0;i<elements->getNum(); i++){
        array.append(transformer->convertToJson(elements->returnObjectPos(i)));
    }
    writer->write(array, &this->exitt);
}


template<class T>
void JSONWriter<T>::close() {
    this->exitt.close();
}

template<class T>
void JSONWriter<T>::write(T *element) {
    Json:: Value classs;
    builder["commentStyle"] = "None";
    builder["identation"] = "";

    classs = transformer->convertToJson(element);
    writer->write(classs, &this->exitt);
}

template<class T>
JSONTransformer<T> *JSONWriter<T>::getTransformer() const {
    return transformer;
}

template<class T>
void JSONWriter<T>::setTransformer(JSONTransformer<T> *transformer) {
    JSONWriter::transformer = transformer;
}




#endif //JSON_HPP_JSONWRITER_H
