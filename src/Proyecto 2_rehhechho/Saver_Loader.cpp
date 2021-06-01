//
// Created by norma on 27/5/2021.
//

#include "Saver_Loader.h"
/*
ArrayTemplate<Patient>* Saver_Loader::PatientLoader() {
    ArrayTemplate<Patient>* A = new ArrayTemplate<Patient>(100);
    fstream file;
    file.open("../../CadenaADN-Pacientes.csv" ,ios::in);
    string linea;
    char delimitador =',';
    while (getline(file,linea)){
        stringstream  stream(linea);
        string nombre, id, cadena;
        getline(stream, nombre, delimitador);
        getline(stream, id, delimitador);
        getline(stream, cadena, delimitador);
        Patient* P = new Patient(nombre, id, cadena);
        cout<<P->toStringAll();
        A->addObject(P);

    }
    file.close();
    return A;
}
*/