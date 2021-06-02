//
// Created by rebec on 31/5/2021.
//

#include "ICSVTransformer.h"

//Lo usa el Writer: Serializar
ArrayTemplateString<string> *PatientCSVTransformer::toStringVector(Patient* element) {
    auto* records= new ArrayTemplateString<string>(0);
    auto* records2= new ArrayTemplateString<string>(0);

    records->addObject(element->getName());
    records->addObject(element->getId());
    records->addObject(element->getADNsequence());

    /*
    for(int i=0;i<element->getNumDiseases();i++){
        records->addObject(element->getDiseaseArray()[i]);
    }
     */

    //casteo de operador maybeee
    //return records + records2;
    return records;
}

//Lo usa el Reader: Deserealizar
Patient *PatientCSVTransformer::fromStringArray(ArrayTemplateString<string> *array) {
    return new Patient(array->getInPos(0), array->getInPos(1), array->getInPos(2), new string(0));
}
