//
// Created by norma on 2/6/2021.
//

#ifndef PROYECTO_2_REHHECHHO_ITERATOR_H
#define PROYECTO_2_REHHECHHO_ITERATOR_H

template<class T>
class Iterator {
public:

    virtual T* getFirst() = 0;
    virtual bool isThereNext() = 0;
};


#endif //PROYECTO_2_REHHECHHO_ITERATOR_H
