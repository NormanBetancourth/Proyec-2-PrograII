//
// Created by rebec on 27/5/2021.
//

#ifndef JSON_HPP_JSONTRANSFORMER_H
#define JSON_HPP_JSONTRANSFORMER_H
#include"lib/json.hpp"
#include"Patient.h"
#include"Disease.h"
using nlohmann::json;

//funciones globales
void to_json(json& j, const Patient& p){
    j = json{
            { "Name", p.getName() },
            { "Id", p.getId() },
            { "ADN sequence", p.getADNsequence() },
            //TODO
            //{"Diseases array"}, {p.toStringDeseases()}
    };
}

void from_json(const json& j, const Disease& d){
    //d.getName() = j.at("Name").get<string>();
    //d.getADNsequence() = j.at("ADN sequence").get<string>();
}


#endif //JSON_HPP_JSONTRANSFORMER_H
