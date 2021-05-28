//
// Created by rebec on 27/5/2021.
//

#ifndef JSON_HPP_JSONWRITER_H
#define JSON_HPP_JSONWRITER_H
#include<fstream>
#include <lib/json.hpp>
#include "IWriter.h"

using nlohmann::json;

template<class T>
class JsonWriter:public IWriter<T> {
private:
    string filePath;
    json jsonModel;
public:
    JsonWriter(string filePath);
    ~JsonWriter();
    void write(T element) override;
    void writeAll(ArrayTemplate<T>* elements) override;
    void close() override;
};



#endif //JSON_HPP_JSONWRITER_H
