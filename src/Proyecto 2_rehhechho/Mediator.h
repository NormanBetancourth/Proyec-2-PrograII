//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_MEDIATOR_H
#define PROYECTO_2_REHHECHHO_MEDIATOR_H
#include <iostream>
using namespace std;
class ComponenteBase;
class Mediator {
public:
    virtual void Notificar(ComponenteBase *sender, string bandera)=0;
};


#endif //PROYECTO_2_REHHECHHO_MEDIATOR_H
