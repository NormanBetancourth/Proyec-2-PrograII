//
// Created by norma on 23/5/2021.
//
#include"Patient.h"
#include "Disease.h"
#include"JSONReader.h"
#include"JSONWriter.h"
#include"MediatorImplemented.h"
#include"DiseaseJSONTransformer.h"

int main() {
    IReader<Disease>* reader = new JSONReader<Disease>("ListaSecuenciaEnfermedad.JSON", new DiseaseJSONTransformer());
    ArrayTemplate<Disease>* diseaseArr = reader->readAll();

    cout << diseaseArr->toString();
    cout << diseaseArr->getNum();

    delete diseaseArr;
    delete reader;
    MediatorImplemented* M = new MediatorImplemented();
    M->menu();

    return 0;
}






