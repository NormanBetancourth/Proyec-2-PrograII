//
// Created by norma on 23/5/2021.
//

#ifndef PROYECTO_2_REHHECHHO_PATIENT_H
#define PROYECTO_2_REHHECHHO_PATIENT_H
#include<iostream>
#include<sstream>
#include<string>
#include"SimpleArrayTemplate.h"

using namespace std;
//Este dato solo se usa para la inicializacion
const int DISEASESIZE = 30;

class Patient {
private:
    string name;
    string id;
    string ADNsequence;
    SimpleArrayTemplate<string> *diseaseArray;
public:
    Patient(const string & = "Undefined", const string & = "Undefined",
            const string & = "Undefined", SimpleArrayTemplate<string> * = nullptr);
    virtual ~Patient();
    const string &getName() const;
    const string &getId() const;
    const string &getADNsequence() const;
    SimpleArrayTemplate<string> *getDiseaseArray() const;
    void addDisease(string x);
    int getNumDiseases();
    void setName(const string &);
    void setId(const string &);
    void setADNsequence(const string &);
    void setDiseaseArray(SimpleArrayTemplate<string> *);
    string toString() const;
    string toStringDeseases() const;
    string toStringSimple() const;
    string sortData();
};

#endif //PROYECTO_2_REHHECHHO_PATIENT_H
