cmake_minimum_required(VERSION 3.17)
project(Proyecto_2_rehhechho)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Proyecto_2_rehhechho
        lib/nlohmann/json.hpp ArrayTemplate.h Disease.cpp Disease.h Patient.cpp Patient.h main.cpp
        Mediator.h Mediator.h MediatorImplemented.cpp MediatorImplemented.h Analyst.cpp Analyst.h BasicComponent.cpp BasicComponent.h
        IFiles.h CSVWriter.cpp CSVWriter.h CSVReader.cpp CSVReader.h ICSVTransformer.cpp ICSVTransformer.h)
