//
// Created by manroy on 02/11/2024.
//

#ifndef LIST_H
#define LIST_H
class List {
public:
    virtual void add(int num) = 0;
    virtual int get(int pos) = 0;
    virtual int remove(int num) = 0;
    virtual void print() = 0;
};
#endif //LIST_H