//
// Created by rebec on 27/5/2021.
//

#ifndef JSON_HPP_JSONWRITER_H
#define JSON_HPP_JSONWRITER_H
#include<fstream>
#include <lib/json.hpp>
#include"ArrayTemplate.h"
using nlohmann::json;

template<class T>
class JsonWriter {
private:
    string filePath;
    json jsonModel;
public:
    JsonWriter(string filePath);
    ~JsonWriter();
    void write(T element);
    void writeAll(ArrayTemplate<T>* elements);
    void close();
};



#endif //JSON_HPP_JSONWRITER_H
