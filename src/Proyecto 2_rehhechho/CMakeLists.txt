cmake_minimum_required(VERSION 3.17)
project(Proyecto_2_rehhechho)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Proyecto_2_rehhechho
        CadenaADN-Pacientes.csv dist/jsoncpp.cpp dist/json ArrayTemplate.h Disease.cpp Disease.h Patient.cpp Patient.h main.cpp
        Control.cpp Control.h Analyst.cpp Analyst.h DiseaseJSONTransformer.h DiseaseJSONTransformer.cpp
        IFiles.h CSVWriter.h CSVReader.h ICSVTransformer.h PatientCSVTransformer.cpp PatientCSVTransformer.h DiseaseCSVTransformer.cpp DiseaseCSVTransformer.h SimpleArrayTemplate.cpp SimpleArrayTemplate.h View.cpp View.h Iterator.h IterableCollection.h ArrayIterator.cpp ArrayIterator.h)
