//
// Created by rebec on 25/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_MEDIATORIMPLEMENTED_H
#define PROYECTO_2_REHHECHHO_MEDIATORIMPLEMENTED_H

#include"sstream"
#include"iostream"
#include "lib/nlohmann/json.hpp"
#include"Patient.h"
#include"Disease.h"
#include"CSVReader.h"
#include"CSVWriter.h"
#include"PatientCSVTransformer.h"
#include "Analyst.h"
#include "View.h"
using nlohmann::json;

using namespace std;
class MediatorImplemented: public Mediator {
private:
    ArrayTemplate<Patient>* patientCollection;
    ArrayTemplate<Disease>* DiseaseColection;
public:
    MediatorImplemented();
    ~MediatorImplemented();
    void menu();
    void analisis1();
    void analisis2();
    void analisis3();

    //void setMediator();
};



#endif //PROYECTO_2_REHHECHHO_MEDIATORIMPLEMENTED_H
