//
// Created by manroy on 01/11/2024.
//

#ifndef LIST_H
#define LIST_H
// DO NOT modify this file.
// Only handle main.cpp
class List {
public:
    virtual void add(int) = 0;
    virtual int get(int pos) = 0;
    virtual int remove(int num) = 0;
    virtual void print() = 0;
};
#endif //LIST_H
