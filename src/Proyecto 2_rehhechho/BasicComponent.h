//
// Created by rebec on 25/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_BASICCOMPONENT_H
#define PROYECTO_2_REHHECHHO_BASICCOMPONENT_H
#include"Mediator.h"

class BasicComponent {
private:
    Mediator *mediator;
public:
    BasicComponent(Mediator* m= nullptr): mediator(m){}
    void setMediator(Mediator* m);
};



#endif //PROYECTO_2_REHHECHHO_BASICCOMPONENT_H
