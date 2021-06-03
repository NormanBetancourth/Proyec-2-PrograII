//
// Created by norma on 23/5/2021.
//
#include"Patient.h"
#include"JSONWriter.h"
#include "MediatorImplemented.h"

int main() {
    /**
    IWriter<Patient>* writer = new JSONWriter<Patient>("pruebaJSON.json");
    auto* objeto1 = new Patient{ "Rebe", "123", "ABC", new SimpleArrayTemplate<string>() };
    auto* objeto2 = new Patient{ "Norman", "456", "DEF", new SimpleArrayTemplate<string>() };

    writer->write(objeto1);
    writer->write(objeto2);

    delete objeto1;
    delete objeto2;
    delete writer;
     **/

    MediatorImplemented* M = new MediatorImplemented();
    M->menu();
    return 0;
}


/**


#include "lib/nlohmann/json.hpp"
#include"Patient.h"
#include"Disease.h"
#include"CSVReader.h"
#include"CSVWriter.h"
#include"PatientCSVTransformer.h"

using nlohmann::json;



    IReader<Patient>* reader = new CSVReader<Patient>("CadenaADN-Pacientes.csv", new PatientCSVTransformer());
    ArrayTemplate<Patient>* patientCollection = reader->readAll();

    //cout << patientCollection->toString();

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

    auto* DiseaseColection = new ArrayTemplate<Disease>(-1);

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


    patientCollection->analisis1(DiseaseColection);
    cout<< "-----------------------------------------------------------------"<<endl;
    cout<< patientCollection->toString();
    cout<< patientCollection->getNum();

    delete patientCollection;
    delete reader;

**/