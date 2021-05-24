//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_NODO_H
#define PROYECTO_2_REHHECHHO_NODO_H
#include "Patient.h"

class Nodo {
private:
    Patient *p;
    Nodo* sig;
public:
    Nodo(Patient *, Nodo*);

    void setPersona(Patient*);
    Patient* getPersona();
    void setSig(Nodo*);
    Nodo* getSig();
    string toString();
};


#endif //PROYECTO_2_REHHECHHO_NODO_H
