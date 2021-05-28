//
// Created by rebec on 27/5/2021.
//

#ifndef JSON_HPP_JSONTRANSFORMER_H
#define JSON_HPP_JSONTRANSFORMER_H
#include"lib/json.hpp"
#include"Patient.h"
#include"Disease.h"
#include"ArrayTemplate.h"
#include<iostream>
using nlohmann::json;

// string name;
//    string ADNsequence;

void to_json(json& j, const Disease& d){
    j = json{
        {"Name"},{d.getName()},
        {"ADN sequence"},{d.getADNsequence()}
    };
}

void from_json(){

}

#endif //JSON_HPP_JSONTRANSFORMER_H
