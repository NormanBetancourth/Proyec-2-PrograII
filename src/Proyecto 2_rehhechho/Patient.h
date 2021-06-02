//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_PATIENT_H
#define PROYECTO_2_REHHECHHO_PATIENT_H

#include<iostream>
#include<sstream>

using namespace std;
//Este dato solo se usa para la inicializacion
const int DISEASESIZE = 30;

class Patient {
private:
    string name;
    string id;
    string ADNsequence;
    string* diseaseArray; //TODO aquí podría usarse el array template pa strings

public:
    Patient(const string & = "Undefined", const string & = "Undefined",
            const string & = "Undefined", string* = nullptr);
    virtual ~Patient();

    const string &getName() const;
    const string &getId() const;
    const string &getADNsequence() const;
    string *getDiseaseArray() const;
    int getNumDiseases();

    void setName(const string &);
    void setId(const string &);
    void setADNsequence(const string &);
    void setDiseaseArray(string *);

    string toStringSimple() const;
    string toStringDeseases() const;
    string toStringAll() const;
};


#endif //PROYECTO_2_REHHECHHO_PATIENT_H
