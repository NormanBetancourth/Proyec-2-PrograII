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
        Patient* Pc= It->getFirst();
        DNA = Pc->getADNsequence();
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
        cout<<"El paciente"<<Pc->getName()<<endl;
        cout<<"Tiene la siguiente concentracion nitrogenada"<<endl;
        cout<<"\tDel componente A: "<<A/tam * 100<<"%"<<endl;
        cout<<"\tDel componente G: "<< G/tam *100<<"%"<<endl;
        cout<<"\tDel componente T: "<< T/tam*100<<"%"<<endl;
        cout<<"\tDel componente C: "<< C/tam*100<<"%"<<endl<<endl;
    }
}

void Analyst::analisis3(Iterator<Patient>* P) {
    ArrayTemplate<Patient>* aux = new ArrayTemplate<Patient>(1);
    while (P->isThereNext() ){
        Patient* Ptt= P->getFirst();
        if (Ptt->sortData() >= "2"){
            aux->addObject(Ptt);
        }

    }
    Iterator<Patient>* TT = aux->createIterador();
    cout<<"Analisis 3"<<endl<<endl;
    string _40 = "40%";
    string _70 = "70%";
    while (TT->isThereNext()){

        Patient* Pc= TT->getFirst();
        cout<<Pc->toString();
        cout<<"Probabilidad de neceditar UCI: ";
        if (Pc->sortData() == "2")
            cout<<_40<<endl;
        if (Pc->sortData() >= "3")
            cout<<_70<<endl;

    }
    cout<<"\tDeseas Generar guardar estos Datos?\n";
    string respuesta;
    cin>> respuesta;
    if (respuesta == "si" || respuesta == "Si" || respuesta == "SI" ){
        generarReporte(aux);
    }

    delete aux;

}

void Analyst::analizar1(Iterator<Patient> *IP, ArrayTemplate<Disease> *ID) {
    while (IP->isThereNext()){
        ID->analisis2(IP->getFirst());
    }
}

void Analyst::generarReporte(ArrayTemplate<Patient> *P) {
    IWriter<Patient>* writer = new CSVWriter<Patient>("../../InformePacientes/InformePacientes.csv", new PatientCSVTransformer());
    Iterator<Patient>* W = P->createIterador();

    while (W->isThereNext()){
        Patient* Wp =W->getFirst();
        if (Wp->sortData() >= "3"){
            Wp->addDisease("70%");
        }
        if (Wp->sortData() == "2"){
            Wp->addDisease("40%");
        }

        writer->write(Wp);
    }

    delete writer;
}






