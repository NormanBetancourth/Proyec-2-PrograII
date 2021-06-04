//
// Created by rebec on 2/6/2021.
//

#ifndef JSON_HPP_JSONREADER_H
#define JSON_HPP_JSONREADER_H
#include"dist/json/json.h"
#include"IFiles.h"
#include"JSONTransformer.h"
#include<fstream>

template<class T>
class JSONReader: public IReader<T> {
private:
    string filePath;
    fstream entry;
    JSONTransformer<T>* transformer;
public:
    JSONReader(string, JSONTransformer<T>*);
    ~JSONReader();
    ArrayTemplate<T>* readAll();
    JSONTransformer<T> *getTransformer() const;
    void setTransformer(JSONTransformer<T> *);

};

template<class T>
JSONReader<T>::JSONReader(string filePath, JSONTransformer<T>* transformer):
        filePath(filePath), transformer(transformer){
    this->entry.open(filePath);
    if(!entry.good()){
        throw invalid_argument("The file path is not valid!\n");
    }
}

template<class T>
JSONReader<T>::~JSONReader() {
    this->entry.close();
    if(getTransformer()){
        delete getTransformer();
    }
}

template<class T>
ArrayTemplate<T> *JSONReader<T>::readAll() {
    Disease* dis = new Disease();
    ArrayTemplate<Disease>* array = new ArrayTemplate<Disease>(SIZE2);
    Json::Reader reader;
    Json::Value objects;
    reader.parse(entry, objects); //objetos toma el formato de Json::arrayValue

    for(int i=0;i<objects.size();i++){
        dis = this->transformer->convertFromJson(objects[i]);
        array->addObject(dis);
    }
    return array;
}

template<class T>
JSONTransformer<T> *JSONReader<T>::getTransformer() const {
    return transformer;
}

template<class T>
void JSONReader<T>::setTransformer(JSONTransformer<T> *transformer) {
    JSONReader::transformer = transformer;
}



#endif //JSON_HPP_JSONREADER_H
