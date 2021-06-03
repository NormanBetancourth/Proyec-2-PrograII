//
// Created by rebec on 25/5/2021.
//

#include "MediatorImplemented.h"

MediatorImplemented::MediatorImplemented() {
    patientCollection = new ArrayTemplate<Patient>(1);
    DiseaseColection = new ArrayTemplate<Disease>(-1);
    IReader<Patient>* reader = new CSVReader<Patient>("CadenaADN-Pacientes.csv", new PatientCSVTransformer());
    patientCollection = reader->readAll();
    delete reader;
}

MediatorImplemented::~MediatorImplemented() {
    delete patientCollection;
    delete DiseaseColection;
}

void MediatorImplemented::menu() {
    //temporal mientras carga json
    auto *dis1= new Disease("Cancer","CGTTTA");
    auto *dis2= new Disease("Daltonismo","GAGCATCT");
    auto *dis3= new Disease("Dermatitis","TCTATG");
    auto *dis4= new Disease("Diabetes","TCATG");
    auto *dis5= new Disease("Escoliosis","TATTGC");
    auto *dis6= new Disease("Fiebre Amarilla","AGTCTT");
    auto *dis7= new Disease("Galactorrea","CGTTTA");
    auto *dis8= new Disease("Gastritis","ATTACG");
    auto *dis9= new Disease("Hantavirus","GTACATCG");
    auto *dis10= new Disease("Ictus Insomnio","CGATTAGC");
    auto *dis11= new Disease("Insuficiencia Renal","ATCAG");
    auto *dis12= new Disease("Leucemia","ATCATGG");
    auto *dis13= new Disease("Lupus","GGAAC");
    auto *dis14= new Disease("Melanoma","CACGT");
    auto *dis15= new Disease("Meningitis","TTGCAT");
    auto *dis16= new Disease("Microcefalia","CTGTA");
    auto *dis17= new Disease("Neurofibromatosis","GTACT");
    auto *dis18= new Disease("Oncocercosis","GTACATG");
    DiseaseColection->addObject(dis1);
    DiseaseColection->addObject(dis2);
    DiseaseColection->addObject(dis3);
    DiseaseColection->addObject(dis4);
    DiseaseColection->addObject(dis5);
    DiseaseColection->addObject(dis6);
    DiseaseColection->addObject(dis7);
    DiseaseColection->addObject(dis8);
    DiseaseColection->addObject(dis9);
    DiseaseColection->addObject(dis10);
    DiseaseColection->addObject(dis11);
    DiseaseColection->addObject(dis12);
    DiseaseColection->addObject(dis13);
    DiseaseColection->addObject(dis14);
    DiseaseColection->addObject(dis15);
    DiseaseColection->addObject(dis16);
    DiseaseColection->addObject(dis17);
    DiseaseColection->addObject(dis18);

    //patientCollection->analisis1(DiseaseColection);
    Analyst::analizar1(patientCollection->createIterador(),DiseaseColection);
    View::welcome();
    int option=0;
    while(option != 4){
        option = View::selectAView();

        switch(option){
            case 1:
                View::clearScreen();
                Analyst::analisis1(patientCollection);
                break;
            case 2:
                View::clearScreen();
                Analyst::analisis2(patientCollection);
                break;
            case 3:
                View::clearScreen();
                patientCollection->sort();
                Analyst::analisis3(patientCollection);
                break;
            case 4:
                View::goodbye();
                option =4;
                break;
            default:
                View::optionErrorMessage();
                break;
        }
        View::clearScreen();


    }

}








