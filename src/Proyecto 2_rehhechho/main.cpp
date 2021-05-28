//
// Created by norma on 23/5/2021.
//
#include"ArrayTemplate.cpp"
#include "Patient.h"
#include"Disease.h"
#include "lib/json.hpp"
#include"JsonWriter.cpp"

using nlohmann::json;

int main() {
    //JsonWriter<Disease>* writer = new JsonWriter<Disease>("ListaSecuenciaEnfermedad.json");


    /**
    string *dis = nullptr;
    dis = new string[5];

    for(int i=0;i<5;i++){
        dis[i] = "";
    }

    dis[0]= "Cancer";
    dis[1] = "Diabetes";

    ArrayTemplate<Patient> miA(0);
    cout << "\nSize: " << miA.getSize();

    Patient* pat1 = new Patient("Rebe","123", "ABC");
    Patient* pat2 = new Patient("Norman","456", "DEF");

    pat1->setDiseaseArray(dis);

    cout << pat1->toStringDeseases();
    miA.addObject(pat1);
    miA.addObject(pat2);

    cout <<miA.toString();

     */

    return 0;
}

