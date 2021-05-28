//
// Created by rebec on 28/5/2021.
//

#ifndef JSON_HPP_JSONREADER_H
#define JSON_HPP_JSONREADER_H
#include<fstream>
#include <lib/json.hpp>
#include "IReader.h"
using nlohmann::json;

template<class T>
class JsonReader:public IReader<T> {
private:
    fstream input;
public:
    JsonReader(string filePath);
    ArrayTemplate<T>* readAll();
    void close() override;
};



#endif //JSON_HPP_JSONREADER_H
