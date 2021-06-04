//
// Created by rebec on 2/6/2021.
//

#ifndef JSON_HPP_JSONTRANSFORMER_H
#define JSON_HPP_JSONTRANSFORMER_H
#include"dist/json/json.h"
#include"ArrayTemplate.h"
#include"Patient.h"
#include"Disease.h"

template<class T>
class JSONTransformer {
public:
    virtual Json::Value convertToJson(T* element) = 0;
    virtual T* convertFromJson(Json::Value) = 0;
    virtual ~JSONTransformer() = default;
};

#endif //JSON_HPP_JSONTRANSFORMER_H
