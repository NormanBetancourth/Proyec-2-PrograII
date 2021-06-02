//
// Created by rebec on 2/6/2021.
//

#include "DiseaseCSVTransformer.h"
//Lo usa el Writer: Serializar
SimpleArrayTemplate<string> *DiseaseCSVTransformer::toStringVector(Disease* element) {
    auto* records= new SimpleArrayTemplate<string>();
    records->addObject(element->getName());
    records->addObject(element->getADNsequence());

    return records;
}

//Lo usa el Reader: Deserealizar
Disease* DiseaseCSVTransformer::fromStringArray(SimpleArrayTemplate<string> *array) {
    return new Disease(array->getInPos(0), array->getInPos(1));
}