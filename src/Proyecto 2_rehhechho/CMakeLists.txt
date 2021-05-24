cmake_minimum_required(VERSION 3.17)
project(Proyecto_2_rehhechho)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Proyecto_2_rehhechho
        ArrayTemplate.cpp
        ArrayTemplate.h Disease.cpp Disease.h Patient.cpp Patient.h main.cpp Mediator.h ComponenteBase.cpp ComponenteBase.h MediatorImplemented.cpp MediatorImplemented.h Nodo.cpp Nodo.h List.cpp List.h Analist.cpp Analist.h)
