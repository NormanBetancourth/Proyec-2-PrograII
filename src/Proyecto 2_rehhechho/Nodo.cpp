//
// Created by norma on 23/5/2021.
//

#include "Nodo.h"

Nodo::Nodo(Patient *p, Nodo * sig) {
this->p=p;
this->sig=sig;
}

void Nodo::setPersona(Patient *P) {
    p=P;
}

Patient *Nodo::getPersona() {
    return p;
}

void Nodo::setSig(Nodo *sig) {
    this->sig=sig;
}

Nodo *Nodo::getSig() {
    return sig;
}

string Nodo::toString() {
    return p->toString();
}