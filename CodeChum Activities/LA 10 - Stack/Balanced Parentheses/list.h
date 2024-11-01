//
// Created by manroy on 01/11/2024.
//

#ifndef LIST_H
#define LIST_H
class List {
public:
    virtual void add(char) = 0;
    virtual char get(int pos) = 0;
    virtual int remove(char num) = 0;
    virtual void print() = 0;
};
#endif //LIST_H
