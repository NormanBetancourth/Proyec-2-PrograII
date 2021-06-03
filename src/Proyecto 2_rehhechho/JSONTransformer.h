//
// Created by rebec on 2/6/2021.
//

#ifndef JSON_HPP_JSONTRANSFORMER_H
#define JSON_HPP_JSONTRANSFORMER_H
#include"lib/nlohmann/json.hpp"
#include"Patient.h"
#include"Disease.h"

using nlohmann::json;

//NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Enfermedad, getEnfermedad(), getSecuencia())

void to_json(json& j, const Patient*);
void to_json(json& j, const Patient&);
void to_json(json& j, const Disease&);

void from_json(json& j, const Disease&);



#endif //JSON_HPP_JSONTRANSFORMER_H
