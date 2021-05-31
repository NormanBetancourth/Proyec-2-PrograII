//
// Created by norma on 30/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_INTERFAZITERATOR_H
#define PROYECTO_2_REHHECHHO_INTERFAZITERATOR_H

template<class T>
class InterfazIterator {
public:
    virtual ~InterfazIterator() = default;
    virtual T* getFirst() = 0;
    virtual bool isThereNext() = 0;
};


#endif //PROYECTO_2_REHHECHHO_INTERFAZITERATOR_H
