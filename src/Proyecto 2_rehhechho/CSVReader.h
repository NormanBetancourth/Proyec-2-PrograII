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
    ICSVTransformer<T>* transformer;

    ArrayTemplateString<string>* registerGeneration(const string& actualRecord){
        auto* records = new ArrayTemplateString<string>(SIZE1 * 4);
        string value;
        istringstream  iss(actualRecord);
        while(getline(iss, value, ';')){
            records->addObject(value);
        }
        return records;
    }
public:
    CSVReader(string, ICSVTransformer<T>*);
    ArrayTemplate<T>* readAll();
    ~CSVReader();

    ICSVTransformer<T>* getTransformer();
    void setTransformer(ICSVTransformer<T>*);
};

//::::::::::::::::::::::::::::::::::::::


template<class T>
CSVReader<T>::CSVReader(string filePath, ICSVTransformer<T> * transformer) {
    this->transformer=transformer;
    this->entry.open(filePath, ios::in);

    if(!entry.good()){
        throw invalid_argument("The file path is not valid\n");
    }
}

template<class T>
ArrayTemplate<T>* CSVReader<T>::readAll() {
    string actualRegister;
    auto* objects = new ArrayTemplate<T>(1);

    while(getline(this->entry, actualRegister)){
        ArrayTemplateString<string>* records = this->registerGeneration(actualRegister);
        objects->addObject(this->transformer->fromStringArray(records));
        delete records;
    }
    return objects;
}

template<class T>
CSVReader<T>::~CSVReader() {
    if(getTransformer()){
        delete getTransformer();
    }
}

template<class T>
ICSVTransformer<T> *CSVReader<T>::getTransformer() {
    return transformer;
}

template<class T>
void CSVReader<T>::setTransformer(ICSVTransformer<T> *transformer) {
    this->transformer=transformer;
}


#endif //JSON_HPP_CSVREADER_H
