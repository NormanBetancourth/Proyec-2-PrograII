cmake_minimum_required(VERSION 3.17)
project(Proyecto_2_rehhechho)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Proyecto_2_rehhechho
        ArrayTemplate.cpp ArrayTemplate.h Disease.cpp Disease.h Patient.cpp Patient.h main.cpp
        Mediator.h Mediator.h MediatorImplemented.cpp MediatorImplemented.h Analyst.cpp Analyst.h BasicComponent.cpp BasicComponent.h
        JsonWriter.cpp JsonWriter.h lib/json.hpp JsonTransformer.cpp JsonTransformer.h Saver_Loader.cpp Saver_Loader.h)
