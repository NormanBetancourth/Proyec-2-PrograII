//
// Created by norma on 23/5/2021.
//
#include "Patient.h"

Patient::Patient(const string& name, const string& id, const string &ADNsequence, SimpleArrayTemplate<string>* diseaseArray):
        name(name),id(id), ADNsequence(ADNsequence), diseaseArray(diseaseArray){
    diseaseArray = new SimpleArrayTemplate<string>();
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

SimpleArrayTemplate<string>* Patient::getDiseaseArray() const {
    return diseaseArray;
}

int Patient::getNumDiseases() {
    return getDiseaseArray()->getNum();
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

void Patient::setDiseaseArray(SimpleArrayTemplate<string>* diseaseArray) {
    Patient::diseaseArray = diseaseArray;
}

string Patient::toString() const {
    stringstream s;
    s << toStringSimple();
    s << toStringDeseases();
    return s.str();
}

string Patient::toStringDeseases() const {
    stringstream ss;
    ss << "\n\nSusceptible diseases\n";
    ss << getDiseaseArray()->toString();
    return ss.str();
}

string Patient::toStringSimple() const {
    stringstream sss;
    sss << "\nPatient Data";
    sss << "\nName: " << getName();
    sss << "\nId: " << getId();
    sss << "\nADN sequence: " << getADNsequence();
    return sss.str();
}

/*

#include "Patient.h"

Patient::Patient(const string &name, const string &id, const string &ADNsequence, StringArray *diseaseArray):
        name(name),id(id), ADNsequence(ADNsequence), diseaseArray(diseaseArray){
    diseaseArray = new StringArray();
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



int Patient::getNumDiseases() {
    return getDiseaseArray()->getNum();
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

void Patient::setDiseaseArray(StringArray *diseaseArray) {
    Patient::diseaseArray = diseaseArray;
}

string Patient::toString() const {
    stringstream s;
    s << "\nPatient Data";
    s << "\n\tName: " << getName();
    s << "\n\tId: " << getId();
    s << "\n\tADN sequence: " << getADNsequence();
    if (!diseaseArray->empty())
        s << "\n\tDiseases: " << toStringDeseases();


    return s.str();
}

string Patient::toStringDeseases() const {
    return diseaseArray->toString();
}

string Patient::toStringAll() const {
    stringstream sss;

    sss << toString();
    sss << toStringDeseases();

    return sss.str();
}

StringArray *Patient::getDiseaseArray() const {
    return diseaseArray;
}

void Patient::addDisease(string k) {
    diseaseArray->addObject(k);
}
*/
