//
// Created by rebec on 31/5/2021.
//

#ifndef JSON_HPP_CSVREADER_H
#define JSON_HPP_CSVREADER_H
#include"IFiles.h"
#include<fstream>
#include"ICSVTransformer.h"

template <class T>
class CSVReader:public IReader<T> {
private:
    fstream entry;
public:
    ArrayTemplate<T>* readAll();
    void close();
    ~CSVReader();
};

//::::::::::::::::::::::::::::::::::::::

template<class T>
ArrayTemplate<T> *CSVReader<T>::readAll() {
    return nullptr;
}

template<class T>
void CSVReader<T>::close() {

}

template<class T>
CSVReader<T>::~CSVReader() {

}


#endif //JSON_HPP_CSVREADER_H
