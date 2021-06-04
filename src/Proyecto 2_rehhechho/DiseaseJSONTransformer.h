//
// Created by rebec on 3/6/2021.
//

#ifndef JSON_HPP_DISEASEJSONTRANSFORMER_H
#define JSON_HPP_DISEASEJSONTRANSFORMER_H
#include"JSONTransformer.h"
#include"dist/json/json.h"

class DiseaseJSONTransformer: public JSONTransformer<Disease> {
public:
    Json::Value convertToJson(Disease* element) override;
    Disease* convertFromJson(Json::Value) override;
    ~DiseaseJSONTransformer() override = default;

};


#endif //JSON_HPP_DISEASEJSONTRANSFORMER_H
