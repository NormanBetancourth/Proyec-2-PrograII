//
// Created by rebec on 25/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_MEDIATORIMPLEMENTED_H
#define PROYECTO_2_REHHECHHO_MEDIATORIMPLEMENTED_H

#include"sstream"
#include"iostream"
#include"Patient.h"
#include"Disease.h"
#include"CSVReader.h"
#include"CSVWriter.h"
#include"PatientCSVTransformer.h"
#include "Analyst.h"
#include "View.h"

using namespace std;
class MediatorImplemented{
private:
    ArrayTemplate<Patient>* patientCollection;
    ArrayTemplate<Disease>* DiseaseColection;
public:
    MediatorImplemented();
    ~MediatorImplemented();
    void menu();
    void buscarEnPacientes();

    //void setMediator();
};



#endif //PROYECTO_2_REHHECHHO_MEDIATORIMPLEMENTED_H
