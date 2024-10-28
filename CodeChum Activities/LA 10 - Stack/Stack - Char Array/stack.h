//
// Created by manroy on 28/10/2024.
//

#ifndef STACK_H
#define STACK_H
// TODO change this to handle char elements

class Stack {
public:
    virtual void push(int) = 0;
    virtual char pop() = 0;
    virtual char top() = 0;
    virtual int size() = 0;
    virtual bool isEmpty() = 0;
    virtual void print() = 0;
};
#endif //STACK_H
