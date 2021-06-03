//
// Created by rebec on 2/6/2021.
//
#include "JSONTransformer.h"

void to_json(json& j, const Patient* p){
    json diseasesArray = json::array();

    for (int i=0; i<p->getDiseaseArray()->getNum();i++){
        json dis = p->getDiseaseArray()->getInPos(i);
        diseasesArray.push_back(dis);
    }
    string name;
    string id;
    string ADNsequence;
    SimpleArrayTemplate<string> *diseaseArray;

    j = json{
            {"Name", p->getName()},
            {"Id", p->getId()},
            {"ADNsequence", p->getADNsequence()},
            {"Susceptiblediseases", diseasesArray}
    };
}


void to_json(json& j, const Patient& p){
    json diseasesArray = json::array();

    for (int i=0; i<p.getDiseaseArray()->getNum();i++){
        json dis = p.getDiseaseArray()->getInPos(i);
        diseasesArray.push_back(dis);
    }
    string name;
    string id;
    string ADNsequence;
    SimpleArrayTemplate<string> *diseaseArray;

    j = json{
            {"Name", p.getName()},
            {"Id", p.getId()},
            {"ADN sequence", p.getADNsequence()},
            {"Susceptible diseases", diseasesArray}
    };
}

void to_json(json& j, const Disease& dis)
{
    j = json{
            {"Disease", dis.getName()},
            {"Sequence", dis.getADNsequence()}
    };
}

void from_json(json& j, Disease& dis){
    dis.setName(j.at("nombre").get<string>());
    dis.setADNsequence((j.at("secuencia").get<string>()));
}
