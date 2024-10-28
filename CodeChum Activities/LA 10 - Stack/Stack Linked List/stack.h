//
// Created by manroy on 28/10/2024.
//

#ifndef STACK_H
#define STACK_H
class Stack {
public:
    virtual void push(int) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;
    virtual int size() = 0;
    virtual bool isEmpty() = 0;
    virtual void print() = 0;
};
#endif //STACK_H
