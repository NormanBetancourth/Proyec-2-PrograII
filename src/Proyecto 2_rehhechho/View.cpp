//
// Created by norma on 2/6/2021.
//

#include "View.h"

void View::welcome() {
    cout << "\tAnalisis de ADN\n";
    cout << "Escoge una opcion\n";
}

void View::goodbye() {
    cout << "\tCerrando programa\n";
}



void View::failMenu() {
    cin.clear();
    cin.ignore(10000, '\n');
    clearScreen();
}

void View::optionErrorMessage() {
    cout << "\n\tEsa opcion no existe!\n";
}

void View::clearScreen() {
    cout << "\n\tENTER para continuar...";
    cin.get();
    cout << string(50, '\n');
}

int View::selectAView() {
    int option;
    cout << "-----------View Selection----------\n\n";
    cout << "\t1. Ver Pacientes con susceptibilidades \n";
    cout << "\t2. Ver pacientes y las concentraciones de las bases nitrogenadas\n";
    cout << "\t3. Pacientes por orden de susceptibilidad\n";
    cout << "\t4. Exit\n";
    cout << "\n\tIngresa una opcion: "; cin >> option;

    while(cin.fail()){
        cout << "You must enter a number!\n";
        failMenu();
        cout << "\t1. Ver Pacientes con susceptibilidades \n";
        cout << "\t2. Ver pacientes y las concentraciones de las bases nitrogenadas\n";
        cout << "\t3. Pacientes por orden de susceptibilidad\n";
        cout << "\t4. Exit\n";
        cout << "\n\tIngresa una opcion: "; cin >> option;
    }

    return option;
}
