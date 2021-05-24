//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_MEDIATORIMPLEMENTED_H
#define PROYECTO_2_REHHECHHO_MEDIATORIMPLEMENTED_H
#include "Mediator.h"
#include "Patient.h"
#include "Disease.h"
#include "ArrayTemplate.h"
#include "Analist.h"

class MediatorImplemented: public Mediator {
private:
    ArrayTemplate<Patient>* patient;
    ArrayTemplate<Disease>* disease;
    Lista* analist;
public:
    MediatorImplemented();
    ~MediatorImplemented();
    void setMediator();
};


#endif //PROYECTO_2_REHHECHHO_MEDIATORIMPLEMENTED_H
