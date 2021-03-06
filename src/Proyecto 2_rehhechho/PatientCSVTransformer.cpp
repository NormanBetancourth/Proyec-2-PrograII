//
// Created by rebec on 2/6/2021.
//

#include "PatientCSVTransformer.h"

//Lo usa el Writer: Serializar
SimpleArrayTemplate<string> *PatientCSVTransformer::toStringVector(Patient* element) {
    auto* records= new SimpleArrayTemplate<string>();

    records->addObject(element->getName());
    records->addObject(element->getId());
    records->addObject(element->getADNsequence());


    for(int i=0;i<element->getNumDiseases();i++){
        records->addObject(element->getDiseaseArray()->getInPos(i));
    }



    return records;
}

//Lo usa el Reader: Deserealizar
Patient* PatientCSVTransformer::fromStringArray(SimpleArrayTemplate<string> *array) {
    return new Patient(array->getInPos(0), array->getInPos(1), array->getInPos(2), new SimpleArrayTemplate<string>());
}
