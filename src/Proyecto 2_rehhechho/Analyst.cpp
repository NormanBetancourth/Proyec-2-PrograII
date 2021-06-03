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
    cout<<P->toString();
}

void Analyst::analisis2(ArrayTemplate<Patient>* P) {
    cout<<"Mostrar la lista de pacientes y la concentracion de cada base\n"
          "nitrogenada en terminos porcentuales"<<endl<<endl;
    float G=0;
    float T=0;
    float C=0;
    float A=0;

    Patient ** temp;
    string DNA;
    temp = P->getData();
    for (int i = 0; i < P->getNum(); ++i) {
        G=0;
        A=0;
        T=0;
        C=0;
        DNA = temp[i]->getADNsequence();
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

        cout<<"El paciente"<<temp[i]->getName()<<endl;
        cout<<"Tiene la siguiente concentracion nitrogenada"<<endl;
        cout<<"\tDel componente A: "<<A/400 * 100<<"%"<<endl;
        cout<<"\tDel componente G: "<< G/400 *100<<"%"<<endl;
        cout<<"\tDel componente T: "<< T/400*100<<"%"<<endl;
        cout<<"\tDel componente C: "<< C/400*100<<"%"<<endl<<endl;

    }
}

void Analyst::analisis3(ArrayTemplate<Patient>* P) {

}
