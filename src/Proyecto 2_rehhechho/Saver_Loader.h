//
// Created by norma on 27/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_SAVER_LOADER_H
#define PROYECTO_2_REHHECHHO_SAVER_LOADER_H
#include "Patient.h"
#include "ArrayTemplate.h"
#include <fstream>
#include <sstream>

class Saver_Loader {
public:
    static ArrayTemplate<Patient>* PatientLoader();
};


#endif //PROYECTO_2_REHHECHHO_SAVER_LOADER_H
