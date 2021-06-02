cmake_minimum_required(VERSION 3.17)
project(Proyecto_2_rehhechho)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Proyecto_2_rehhechho
        CadenaADN-Pacientes.csv lib/nlohmann/json.hpp ArrayTemplate.h Disease.cpp Disease.h Patient.cpp Patient.h main.cpp
        Mediator.h Mediator.h MediatorImplemented.cpp MediatorImplemented.h Analyst.cpp Analyst.h BasicComponent.cpp BasicComponent.h
        IFiles.h CSVWriter.h CSVReader.h ICSVTransformer.h StringArray.cpp StringArray.h PatientCSVTransformer.cpp PatientCSVTransformer.h DiseaseCSVTransformer.cpp DiseaseCSVTransformer.h)
