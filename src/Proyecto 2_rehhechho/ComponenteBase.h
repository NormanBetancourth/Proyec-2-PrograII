//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_COMPONENTEBASE_H
#define PROYECTO_2_REHHECHHO_COMPONENTEBASE_H
#include "Mediator.h"

class ComponenteBase {
private:
    Mediator *mediator;
public:
    ComponenteBase(Mediator* m= nullptr): mediator(m){}
    void setMediator(Mediator* m);
};


#endif //PROYECTO_2_REHHECHHO_COMPONENTEBASE_H
