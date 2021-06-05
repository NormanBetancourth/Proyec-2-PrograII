//
// Created by rebec on 25/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_CONTROL_H
#define PROYECTO_2_REHHECHHO_CONTROL_H

#include"sstream"
#include"iostream"
#include"Patient.h"
#include"Disease.h"
#include"JSONReader.h"
#include"DiseaseJSONTransformer.h"
#include"CSVReader.h"
#include"CSVWriter.h"
#include"PatientCSVTransformer.h"
#include "Analyst.h"
#include "View.h"

using namespace std;
class Control{
private:
    ArrayTemplate<Patient>* patientCollection;
    ArrayTemplate<Disease>* DiseaseColection;
public:
    Control();
    ~Control();
    void menu();


    //void setMediator();
};



#endif //PROYECTO_2_REHHECHHO_CONTROL_H
