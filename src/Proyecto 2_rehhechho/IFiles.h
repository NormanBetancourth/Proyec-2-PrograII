//
// Created by rebec on 31/5/2021.
//

#ifndef JSON_HPP_IFILES_H
#define JSON_HPP_IFILES_H
#include"ArrayTemplate.h"

template <class T>
class IWriter {
public:
    virtual void write(T element) = 0;
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
