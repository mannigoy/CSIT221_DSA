//
// Created by manroy on 28/10/2024.
//

#ifndef SINGLYSTACK_H
#define SINGLYSTACK_H
// TODO implement the class SinglyStack here
// by inheriting the Stack class

#include <iostream>
#include "stack.h"
#include "linkedlist.h"
using namespace std;



class SinglyStack: public Stack{

    LinkedList* list = new LinkedList();

public:
    void push(int num){
        list->addHead(num);
    }

    int pop(){
        if(size()==0){
            return 0;
        }
        return list->removeHead();
    }

    int top(){
        if(size()==0){
            return 0;
        }
        return list->getTop();
    }
    int size(){return list->_size();}
    bool isEmpty(){return size()==0;}
    void print(){}







};
#endif //SINGLYSTACK_H
