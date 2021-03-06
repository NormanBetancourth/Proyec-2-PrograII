//
// Created by rebec on 25/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_ANALYST_H
#define PROYECTO_2_REHHECHHO_ANALYST_H
#include "ArrayTemplate.h"
#include "CSVWriter.h"
#include"PatientCSVTransformer.h"
class Analyst{
public:
    Analyst();
    ~Analyst();
    static void analisis1(ArrayTemplate<Patient>* P);
    static void analisis2(ArrayTemplate<Patient>* P);
    static void analisis3(Iterator<Patient>* P);
    static void analizar1(Iterator<Patient>* IP, ArrayTemplate<Disease>* ID);
    static void generarReporte(ArrayTemplate<Patient>* P);
};


#endif //PROYECTO_2_REHHECHHO_ANALYST_H
