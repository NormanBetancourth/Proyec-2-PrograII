//
// Created by norma on 23/5/2021.
//
#include"ArrayTemplate.cpp"
#include "Patient.h"

int main() {
    ArrayTemplate<Patient> miA(0);
    Patient *p1 = new Patient( "Rebe", "123", "ABC");

    cout << p1->toString();
    cout <<miA.getSize();
    miA.addObject(p1);
    cout << miA.toString();


    return 0;
}

