//
// Created by rebec on 28/5/2021.
//

#ifndef JSON_HPP_IREADER_H
#define JSON_HPP_IREADER_H
#include"ArrayTemplate.cpp"

template <class T>
class IReader {
public:
    virtual ArrayTemplate<T>* readAll() = 0;
    virtual void close() = 0;
    virtual ~IReader() = default;

};

#endif //JSON_HPP_IREADER_H
