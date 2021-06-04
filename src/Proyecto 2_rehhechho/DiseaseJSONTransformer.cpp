//
// Created by rebec on 3/6/2021.
//

#include "DiseaseJSONTransformer.h"

Json::Value DiseaseJSONTransformer::convertToJson(Disease *element) {
    Json::Value j;
    j["name"] = element->getName();
    j["ADNsequence"] = element->getADNsequence();
    return j;
}

Disease *DiseaseJSONTransformer::convertFromJson(Json::Value j) {
    Disease* aux = new Disease();
    aux->setName(j["name"].asString());
    aux->setADNsequence((j["ADNsequence"].asString()));
    return aux;
}