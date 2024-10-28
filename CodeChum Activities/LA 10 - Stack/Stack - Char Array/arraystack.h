//
// Created by manroy on 28/10/2024.
//

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
// TODO change this to handle char elements

#include <iostream>
#include "arraylist.h"
#include "stack.h"
using namespace std;

class ArrayStack : public Stack {
    ArrayList* list = new ArrayList();
public:

    // TODO push
    void push(int num) {
        list->add(num);
    }

    // TODO pop
    char pop() {
        if(isEmpty()){return ' ';
        }
        return list->removeLast();

    }

    // TODO top
    char top() {
        if(isEmpty()){return ' ';
        }
        return list->get(list->_size());
    }

    // TODO size
    int size() {
        return list->_size();
    }

    // TODO isEmpty
    bool isEmpty() {
        return list->_size()==0;
    }

    void print() {
        list->print();
    }
};
#endif //ARRAYSTACK_H
