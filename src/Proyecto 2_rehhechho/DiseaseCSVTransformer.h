//
// Created by rebec on 2/6/2021.
//

#ifndef JSON_HPP_DISEASECSVTRANSFORMER_H
#define JSON_HPP_DISEASECSVTRANSFORMER_H
#include"ICSVTransformer.h"

class DiseaseCSVTransformer:public ICSVTransformer<Disease>{
public:
    ~DiseaseCSVTransformer() override =default;
    ArrayTemplateString<string>* toStringVector(Disease* element) override;
    Disease* fromStringArray(ArrayTemplateString<string>* array) override;
};


#endif //JSON_HPP_DISEASECSVTRANSFORMER_H
