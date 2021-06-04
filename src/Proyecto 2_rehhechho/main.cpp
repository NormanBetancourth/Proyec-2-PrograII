//
// Created by norma on 23/5/2021.
//
#include"Patient.h"
#include"JSONWriter.h"
#include "MediatorImplemented.h"

int main() {
    /**
    IWriter<Patient>* writer = new JSONWriter<Patient>("pruebaJSON.json");
    auto* objeto1 = new Patient{ "Rebe", "123", "ABC", new SimpleArrayTemplate<string>() };
    auto* objeto2 = new Patient{ "Norman", "456", "DEF", new SimpleArrayTemplate<string>() };

    writer->write(objeto1);
    writer->write(objeto2);

    delete objeto1;
    delete objeto2;
    delete writer;
     **/


    MediatorImplemented* M = new MediatorImplemented();
    M->menu();
    //Todo: meter mas Try catch
    //Todo: Argumentar pq solo usamos 1 patron
    return 0;
}


