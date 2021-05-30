//
// Created by norma on 23/5/2021.
//
#include "Patient.h"

Patient::Patient(const string &name, const string &id, const string &ADNsequence, string *diseaseArray):
        name(name),id(id), ADNsequence(ADNsequence), diseaseArray(diseaseArray){
    diseaseArray = new string[DISEASESIZE];
    for(int i =0; i < DISEASESIZE; i++) {
        diseaseArray[i] = "";
    }
}

Patient::~Patient() {
    if(getDiseaseArray()){
        delete getDiseaseArray();
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

string *Patient::getDiseaseArray() const {
    return diseaseArray;
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

void Patient::setDiseaseArray(string *diseaseArray) {
    Patient::diseaseArray = diseaseArray;
}

string Patient::toStringSimple() const {
    stringstream s;
    s << "\nPatient Data";
    s << "\n\tName: " << getName();
    s << "\n\tId: " << getId();
    s << "\n\tADN sequence: " << getADNsequence();
    return s.str();
}

string Patient::toStringDeseases() const {
    stringstream ss;
    ss << "\n\n\tSusceptible diseases\n";
    for(int i = 0; i < getDiseaseArray()->size() - 1; i++){
        ss << "\t" << getDiseaseArray()[i] << "\n";
    }
    return ss.str();
}

string Patient::toStringAll() const {
    stringstream sss;

    sss << toStringSimple();
    sss << toStringDeseases();

    return sss.str();
}