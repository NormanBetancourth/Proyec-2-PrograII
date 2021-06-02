//
// Created by rebec on 2/6/2021.
//

#ifndef JSON_HPP_PATIENTCSVTRANSFORMER_H
#define JSON_HPP_PATIENTCSVTRANSFORMER_H
#include"ICSVTransformer.h"
#include"Patient.h"

//Transformador de pacientes
class PatientCSVTransformer: public ICSVTransformer<Patient>{
public:
    //hice especializacion template string
    ~PatientCSVTransformer() override =default;
    SimpleArrayTemplate<string>* toStringVector(Patient* element) override;
    Patient* fromStringArray(SimpleArrayTemplate<string>* array) override;
};

#endif //JSON_HPP_PATIENTCSVTRANSFORMER_H
