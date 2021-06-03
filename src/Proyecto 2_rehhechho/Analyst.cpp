//
// Created by rebec on 25/5/2021.
//

#include "Analyst.h"

//Analyst::Analyst(Lista *p) : pacientes(p){
//}

Analyst::Analyst() {
}

Analyst::~Analyst() {

}

void Analyst::analisis1(ArrayTemplate<Patient>* P) {
    cout<<"\tPacientes y sus susceptibilidades\n";
    Iterator<Patient>* It= P->createIterador();

    while (It->isThereNext()){
        cout<<It->getFirst()->toString();
    }

    delete It;
}

void Analyst::analisis2(ArrayTemplate<Patient>* P) {
    cout<<"Mostrar los pacientes y la concentracion de cada base\n"
          "nitrogenada en terminos porcentuales"<<endl<<endl;
    float G=0;
    float T=0;
    float C=0;
    float A=0;
    string DNA;
    Iterator<Patient> *It = P->createIterador();
    while (It->isThereNext()){
        G=0;
        A=0;
        T=0;
        C=0;
        DNA = It->getFirst()->getADNsequence();
        float tam = DNA.length();
        for (int j = 0; j < DNA.length(); ++j) {
            if (DNA[j] == 'G')
                G++;
            if (DNA[j] == 'T')
                T++;
            if (DNA[j] == 'C')
                C++;
            if (DNA[j] == 'A')
                A++;

        }
        cout<<"El paciente"<<It->getFirst()->getName()<<endl;
        cout<<"Tiene la siguiente concentracion nitrogenada"<<endl;
        cout<<"\tDel componente A: "<<A/tam * 100<<"%"<<endl;
        cout<<"\tDel componente G: "<< G/tam *100<<"%"<<endl;
        cout<<"\tDel componente T: "<< T/tam*100<<"%"<<endl;
        cout<<"\tDel componente C: "<< C/tam*100<<"%"<<endl<<endl;
    }
}

void Analyst::analisis3(ArrayTemplate<Patient>* P) {

}


