//
// Created by rebec on 31/5/2021.
//
#ifndef JSON_HPP_ICSVTRANSFORMER_H
#define JSON_HPP_ICSVTRANSFORMER_H
#include"ArrayTemplate.h"
#include"Patient.h"
#include"Disease.h"

template<class T>
class ICSVTransformer {
public:
    virtual ArrayTemplateString<string>* toStringVector(T* element) = 0;
    virtual T* fromStringArray(ArrayTemplateString<string>* array) = 0;
    virtual ~ICSVTransformer() = default;
};


#endif //JSON_HPP_ICSVTRANSFORMER_H
