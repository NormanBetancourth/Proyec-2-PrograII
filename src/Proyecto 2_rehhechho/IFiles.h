//
// Created by rebec on 31/5/2021.
//

#ifndef JSON_HPP_IFILES_H
#define JSON_HPP_IFILES_H
#include"ArrayTemplate.h"

/**
 * Para la sección de cargar y escribir archivos tanto CSV como JSON,
 * decidimos utilizar el patrón Strategy, ya que este nos permite mantener
 * organizados un grupo de algoritmos entre los cuales el usuario puede decidir
 * en tiempo de ejecución cualquiera que desee
 * Además, se reutiliza el código y se respeta el Princio Abierto y Cerrado,
 * brindándonos un entorno favorable en el caso de una futura agregación de
 * formatos al ambiente de trabajo.
 * **/

template <class T>
class IWriter {
public:
    virtual void write(T* element) = 0;
    virtual void writeAll(ArrayTemplate<T>* elements) = 0;
    virtual ~IWriter() = default;
};

template <class T>
class IReader {
public:
    virtual ArrayTemplate<T>* readAll() = 0;
    virtual ~IReader() = default;
};



#endif //JSON_HPP_IFILES_H
