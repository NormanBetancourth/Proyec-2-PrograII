//
// Created by norma on 23/5/2021.
//

#include "Disease.h"

Disease::Disease(const string &name, const string &ADNsequence) :
        name(name), ADNsequence(ADNsequence) {}

Disease::~Disease() {

}

const string &Disease::getName() const {
    return name;
}

const string &Disease::getADNsequence() const {
    return ADNsequence;
}

void Disease::setName(const string &name) {
    Disease::name = name;
}

void Disease::setADNsequence(const string &ADNsequence) {
    Disease::ADNsequence = ADNsequence;
}

string Disease::toString() const {
    stringstream ss;
    ss << "\nName: " << getName();
    ss << "\nADN sequence: " << getADNsequence();
    return ss.str();
}

string Disease::sortData() {
    return name;
}


