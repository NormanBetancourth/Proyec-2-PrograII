//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_DISEASE_H
#define PROYECTO_2_REHHECHHO_DISEASE_H


#include<iostream>
#include<sstream>
#include "ComponenteBase.h"
using namespace std;

class Disease: public ComponenteBase {
private:
    string name;
    string ADNsequence;
public:
    Disease(const string & = "Undefined", const string & = "Undefined");
    virtual ~Disease();

    const string &getName() const;
    const string &getAdNsequence() const;
    void setName(const string &);
    void setAdNsequence(const string &);

    string toString() const;

};


#endif //PROYECTO_2_REHHECHHO_DISEASE_H
