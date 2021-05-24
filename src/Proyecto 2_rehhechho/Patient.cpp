//
// Created by norma on 23/5/2021.
//
#include "Patient.h"

Patient::Patient(const string &name, const string &id, const string &ADNsequence):
        name(name),id(id), ADNsequence(ADNsequence){

    deseasesArray = new string[DESEASESIZE];
    for(int i =0; i < DESEASESIZE; i++){
        deseasesArray[i] = "";
    }

}

Patient::~Patient() {
    if(getDeseasesArray()){
        delete getDeseasesArray();
    }
}

const string &Patient::getName() const {
    return name;
}

const string &Patient::getId() const {
    return id;
}

const string &Patient::getADNsequence() const {
    return ADNsequence;
}

string *Patient::getDeseasesArray() const {
    return deseasesArray;
}


void Patient::setName(const string &name) {
    Patient::name = name;
}

void Patient::setId(const string &id) {
    Patient::id = id;
}

void Patient::setADNsequence(const string &ADNsequence) {
    Patient::ADNsequence = ADNsequence;
}

string Patient::toString() const {
    stringstream ss;
    ss << "\n\tName: " << getName();
    ss << "\n\tId: " << getId();
    ss << "\n\tADN sequence: " << getADNsequence();
    //ss << "\n\tSusceptible desease(s): "<< toStringDeseases();
    return ss.str();
}

string Patient::toStringDeseases() const {
    stringstream s;
    for (int i = 0; i < DESEASESIZE; i++){
        s << "\n\t" << deseasesArray[i];
    }
    return s.str();
}


