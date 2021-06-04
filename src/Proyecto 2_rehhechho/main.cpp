//
// Created by norma on 23/5/2021.
//
#include"Patient.h"
#include "Disease.h"
#include"JSONReader.h"
#include"JSONWriter.h"
#include"DiseaseJSONTransformer.h"
#include"MediatorImplemented.h"

int main() {
    MediatorImplemented* M = new MediatorImplemented();
    M->menu();

    return 0;
}



