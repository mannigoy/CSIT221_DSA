//
// Created by manroy on 28/10/2024.
//

#ifndef LIST_H
#define LIST_H
// TODO change this to handle char elements

class List {
public:
    virtual void add(char) = 0;
    virtual char get(int pos) = 0;
    virtual int remove(int num) = 0;
    virtual void print() = 0;
};
#endif //LIST_H
