//
// Created by norma on 23/5/2021.
//

#include "Analist.h"

Analist::Analist(Lista *p) : pacientes(p){
}

Analist::Analist() {
    pacientes = new Lista();
}

Analist::~Analist() {
    delete pacientes;
}
