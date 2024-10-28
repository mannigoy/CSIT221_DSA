//
// Created by manroy on 28/10/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <cstdlib>
#include <iostream>
#include "list.h"
#include "node.h"
using namespace std;

class LinkedList : public List {
    node* head;
    node* tail;
    int size;

public:
    // TODO if necessary
    int removeHead() {
        int dataToremove = head->elem;


        head= head->next;

        size--;
        return dataToremove;

    }

    // TODO if necessary
    void addTail(int num) {

    }

    // TODO if necessary
    void addHead(int num) {
        node* newNode = new node;
        newNode->elem= num;

        if(size==0){
            head=newNode;
            tail=newNode;
            newNode->next=nullptr;
            size++;
        }
        else{
            newNode->next=head;
            head=newNode;
            size++;

        }

    }

    // TODO if necessary
    void add(int num) {

    }

    // TODO add more methods as necessary

    int _size() {
        return size;
    }

    int get(int pos) {
        return 0;
    }

    int remove(int num) {
        return 0;
    }

    int getTop(){
        int data=head->elem;
        return data;
    }

    void print() {
        node* curr = head;
        if (size == 0) {
            cout << "Empty" << endl;
        }
        else {
            do {
                cout << curr->elem;
                if (curr->next) {
                    cout << " -> ";
                } else {
                    cout << endl;
                }
                curr = curr->next;
            } while (curr);
        }
    }
};
#endif //LINKEDLIST_H
