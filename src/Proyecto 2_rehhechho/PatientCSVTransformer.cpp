//
// Created by rebec on 2/6/2021.
//

#include "PatientCSVTransformer.h"

//Lo usa el Writer: Serializar
ArrayTemplateString<string> *PatientCSVTransformer::toStringVector(Patient* element) {
    auto* records= new ArrayTemplateString<string>(SIZE1);
    //auto* records2= new ArrayTemplateString<string>(0);

    records->addObject(element->getName());
    records->addObject(element->getId());
    records->addObject(element->getADNsequence());
    //TODO ajustar
    //records->addObject("...");

    return records;
    //records->addObject("enfermedadesx");

    /*
    for(int i=0;i<element->getNumDiseases();i++){
        records->addObject(element->getDiseaseArray()[i]);
    }
     */

    //casteo de operador maybeee
    //return records + records2;
}

//Lo usa el Reader: Deserealizar
Patient* PatientCSVTransformer::fromStringArray(ArrayTemplateString<string> *array) {
    return new Patient(array->getInPos(0), array->getInPos(1), array->getInPos(2),new StringArray());
}
