//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_LIST_H
#define PROYECTO_2_REHHECHHO_LIST_H

#include "Nodo.h"
#include "MediatorImplemented.h"

class Lista {
private:
    Nodo* raiz;
    Nodo* aux;
public:
    Lista();
    ~Lista();
    void agregarIni(Patient*);
    void agregarFinal(Patient*);
    string toString();
    bool estaVacia();
    void ordenarLista();
    bool eliminarIni();
    bool eliminaFinal();
    int cuentaNodos();
    bool busqueda(string);
    Patient* acceso(string);
    void setMediator(Mediator *m);
};



#endif //PROYECTO_2_REHHECHHO_LIST_H
