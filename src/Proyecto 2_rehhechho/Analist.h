//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_ANALIST_H
#define PROYECTO_2_REHHECHHO_ANALIST_H
#include "ComponenteBase.h"
#include "List.h"

class Analist:ComponenteBase {
private:
    Lista *pacientes;
public:
    Analist();
    ~Analist();
    Analist(Lista* p= nullptr);

};


#endif //PROYECTO_2_REHHECHHO_ANALIST_H
