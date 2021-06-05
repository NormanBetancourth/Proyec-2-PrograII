//
// Created by norma on 23/5/2021.
//
#include"Patient.h"
#include "Disease.h"
#include"JSONReader.h"
#include"JSONWriter.h"
#include"DiseaseJSONTransformer.h"
#include"Control.h"

int main() {
    Control* M = new Control();
    M->menu();
    /**
     * Usamos el iterador para respetar la generalidad del Arraytemplate, y realizamos
     * los metodos especificos necesarios para cada clase fuera, en analyst, asi
     * evitamos problemas de ejecucion y mantenemos la generalidad del ArrayTemplate.
     * Aunque en este proyecto solo usamos una estructura de Arraytemplate, es importante
     * resaltar que el programa queda abierto a alguna mejora, con alguna otra estructura
     * generica, a la cual podemos acceder a todos los elementos mediante una corta implementacon
     * de su respectivo Iterador.
     * **/

    return 0;
}



