//
// Created by rebec on 28/5/2021.
//

#ifndef JSON_HPP_IWRITER_H
#define JSON_HPP_IWRITER_H
#include"ArrayTemplate.cpp"

template <class T>
class IWriter {
public:
    virtual void write(T element) = 0;
    virtual void writeAll(ArrayTemplate<T>* elements) = 0;
    virtual void close() = 0;
    virtual ~IWriter() = default;
};


#endif //JSON_HPP_IWRITER_H
