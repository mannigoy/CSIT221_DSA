//
// Created by manroy on 02/11/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <cstdlib>
#include <iostream>
#include "list.h"
using namespace std;

class LinkedList : public List {
    node* head;
    node* tail;
    int size;

public:
    node* add(int num) {
        node* n = (node*) calloc( 1, sizeof(node) );
        n->elem = num;
        if (size == 0) {
            head = n;
            tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        size++;
        return n;
    }

    int get(int pos) {
        // IGNORE for now
        return 0;
    }

    int remove(int num) {
        node* curr = head;
        node* prev;
        while (curr) {
            if (curr->elem == num) {
                prev->next = curr->next;
                size--;
                return 0;
            }
            prev = curr;
            curr = curr->next;

        }
    }

    void flip(){
        node* curr=head;
        node* after=new node;
        node* prev=new node;
        node* temp=head;




        while(curr){
            after = curr->next;
            curr->next = prev;
            prev= curr;
            curr=after;


        }
        prev=head;
        head=tail;
        tail=prev;

    }


    // DO NOT modify the code below.
    void print() {
        node* curr = head;
        if (size == 0) {
            cout << "Empty" << endl;
        } else {
            while (true) {
                cout << curr->elem;
                if (curr != tail) {
                    cout << " -> ";
                } else {
                    cout << endl;
                    break;
                }
                curr = curr->next;
            }
        }
    }
};
#endif //LINKEDLIST_H
