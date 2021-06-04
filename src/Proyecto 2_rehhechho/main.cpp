//
// Created by norma on 23/5/2021.
//
#include"Patient.h"
#include "Disease.h"
#include"JSONReader.h"
#include"JSONWriter.h"
#include"DiseaseJSONTransformer.h"

int main() {
    IReader<Disease>* reader = new JSONReader<Disease>("ListaSecuenciaEnfermedad.JSON", new DiseaseJSONTransformer());
    ArrayTemplate<Disease>* diseaseArr = reader->readAll();

    cout << diseaseArr->toString();
    cout << diseaseArr->getNum();

    delete diseaseArr;
    delete reader;

    return 0;
}
/*
    MediatorImplemented* M = new MediatorImplemented();
    M->menu();
    */



