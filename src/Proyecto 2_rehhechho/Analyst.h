//
// Created by rebec on 25/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_ANALYST_H
#define PROYECTO_2_REHHECHHO_ANALYST_H
#include "ArrayTemplate.h"
class Analyst{
public:
    Analyst();
    ~Analyst();
    static void analisis1(ArrayTemplate<Patient>* P);
    static void analisis2(ArrayTemplate<Patient>* P);
    static void analisis3(ArrayTemplate<Patient>* P);
    static void analizar1(Iterator<Patient>* IP, ArrayTemplate<Disease>* ID);
};


#endif //PROYECTO_2_REHHECHHO_ANALYST_H
