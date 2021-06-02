//
// Created by norma on 1/6/2021.
//

#include "StringArray.h"
StringArray::StringArray() {
    num = 0;
    vector = new string [30];
}

StringArray::~StringArray() {
    setNum(0);
}

void StringArray::setNum(int c) {
    num = c;
}

int StringArray::getNum() const {
    return num;
}

void StringArray::addObject(string line) {
    if (num < 30) {
        vector[num] = line;
        setNum(num+ 1);
    }
}

bool StringArray::empty() {
    for (int i = 0; i < num; i++) {
        if (vector[i] == "")
            return true;
    }
    return false;
}

string StringArray::toString() const {
    stringstream ss;
    ss << "\nArray List Information\n";
    for(int i = 0; i < num; i++){
        ss << vector[i] << "\n";
    }
    return ss.str();
}