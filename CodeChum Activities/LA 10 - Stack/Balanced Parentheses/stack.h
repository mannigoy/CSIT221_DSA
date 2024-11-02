//
// Created by manroy on 01/11/2024.
//

#ifndef STACK_H
#define STACK_H
class Stack {
public:
    virtual void push(char) = 0;
    virtual char pop() = 0;
    virtual char top() = 0;
    virtual int size() = 0;
    virtual bool isEmpty() = 0;
    virtual void print() = 0;

};
#endif //STACK_H