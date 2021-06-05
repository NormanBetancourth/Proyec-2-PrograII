//
// Created by rebec on 25/5/2021.
//

#include "Control.h"

Control::Control() {
    patientCollection = new ArrayTemplate<Patient>(1);
    DiseaseColection = new ArrayTemplate<Disease>(-1);
    IReader<Patient>* reader = new CSVReader<Patient>("CadenaADN-Pacientes.csv", new PatientCSVTransformer());
    patientCollection = reader->readAll();
    delete reader;
}

Control::~Control() {
    delete patientCollection;
    delete DiseaseColection;
}

void Control::menu() {

    IReader<Disease>* reader = new JSONReader<Disease>("ListaSecuenciaEnfermedad.JSON", new DiseaseJSONTransformer());
    ArrayTemplate<Disease>* diseaseArr = reader->readAll();
    DiseaseColection = diseaseArr;








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
                Analyst::analisis3(patientCollection->createIterador());
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








