//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_DISEASE_H
#define PROYECTO_2_REHHECHHO_DISEASE_H


#include<iostream>
#include<sstream>
using namespace std;

class Disease{
private:
    string name;
    string ADNsequence;
public:
    Disease(const string & = "Undefined", const string & = "Undefined");
    virtual ~Disease();

    const string &getName() const;
    const string &getADNsequence() const;
    void setName(const string &);
    void setADNsequence(const string &);

    string toString() const;

};


#endif //PROYECTO_2_REHHECHHO_DISEASE_H
