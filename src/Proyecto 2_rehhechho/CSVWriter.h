//
// Created by rebec on 31/5/2021.
//

#pragma once
#ifndef JSON_HPP_CSVWRITER_H
#define JSON_HPP_CSVWRITER_H
#include"IFiles.h"
#include"ICSVTransformer.h"
#include<fstream>

template <class T>
class CSVWriter:public IWriter<T> {
private:
    fstream ex;
    ICSVTransformer<T>* transformer;

    string registerGeneration(ArrayTemplateString<string>* record){
        int cont = 0;
        //TODO calcular el primer objeto y ultimo? iterador
        auto begin = record->getInPos(cont);
        auto end = record->getInPos(record->getNum());

        stringstream ss;

        if (begin != end){
            //iterador
            ss << begin;
            begin = record->getInPos(++cont);
        }

        while (begin != end){
            ss << ",";
            ss << begin;
            begin = record->getInPos(cont++);
        }

        ss << endl;
        return ss.str();
    }

public:
    CSVWriter(string filePath, ICSVTransformer<T>* transformer);
    ~CSVWriter();
    void write(T element);
    void writeAll(ArrayTemplate<T>* elements);
};


//:::::::::::::::::::::::::::::::::::::::::::::::

template<class T>
CSVWriter<T>::CSVWriter(string filePath, ICSVTransformer<T> *transformer) {
    this->transformer = transformer;
    this->ex.open(filePath, ios::out);

    if(!this->ex.good()) {
        throw invalid_argument("The file path is not valid!\n");
    }
}

template<class T>
CSVWriter<T>::~CSVWriter() {
    this->ex.close();
    //TODO hacer get
    delete this->transformer;
}

template<class T>
void CSVWriter<T>::write(T element) {
    ArrayTemplateString<string>* records = this->transformer->toStringVector(element);
    this->ex << this->registerGeneration(records);
    delete records;
}


template<class T>
void CSVWriter<T>::writeAll(ArrayTemplate<T> *elements) {
    for(int i=0;i<elements->getNum();i++){
        this->write(*elements->returnObjectPos(i));
    }
}



#endif //JSON_HPP_CSVWRITER_H
