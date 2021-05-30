//
// Created by rebec on 29/5/2021.
//

#ifndef JSON_HPP_FILEMANAGER_H
#define JSON_HPP_FILEMANAGER_H
#include "lib/nlohmann/json.hpp"
#include"Patient.h"
#include"ArrayTemplate.cpp"
using nlohmann::json;

class FileManager {
public:
    static string serialize(const ArrayTemplate<Patient> &);
    static ArrayTemplate<Patient> deserialize(const string &);
    static void save(const string &jsonData, const string &filename);
    static string read(const string &filename);
};


#endif //JSON_HPP_FILEMANAGER_H
