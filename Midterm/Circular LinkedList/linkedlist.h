//
// Created by manroy on 02/11/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "list.h"
#include <iostream>
#include "node.h"
using namespace std;

class CircularLL : public List {
    node* tail;
    int size;

public:
    void add(int num) {
        addFirst(num);
    }

    void addFirst(int num) {
        node* newNode = new node;
        newNode->elem=num;

        if(size==0){
            newNode->next= newNode;
            tail=newNode;
        }
        else{
            newNode->next= tail->next;
            tail->next= newNode;
        }
        size++;
    }


    void addLast(int num) {
        node* newNode = new node;
        newNode->elem=num;

        if(size==0){
            newNode->next= newNode;
            tail=newNode;
        }
        else{
            newNode->next= tail->next;
            tail->next= newNode;
            tail=newNode;
        }
        size++;
    }

    int get(int pos) {
        // IGNORE
        return 0;
    }

    int getTail() {
        if(size==0){
            return -1;
        }
        return tail->elem;
    }

    void rotate() {
        if(tail!=nullptr && tail->next != nullptr){
            tail=tail->next;
        }
    }

    int remove(int num) {
        // IGNORE
        return 0;
    }

    int removeFirst() {
        if(size==0){
            return -1;
        }

        int dataToReturn = tail->next->elem;

        node* curr= tail->next;
        tail->next=curr->next;

        free(curr);
        size--;

        return dataToReturn;

    }

    void print() {
        cout << "Size: " << size << endl;


        if(size==0){
            cout<<"Empty"<< endl;
            return;
        }else{

            node* curr=tail->next;

            while(true){
                cout<<curr->elem;
                if(curr!=tail){
                    cout<<"->";
                }
                else{

                    break;
                }
                curr=curr->next;
            }
            //gawas sa while
            cout<<"->"<<tail->next->elem<<endl;
            //hardcoded
        }
    }

    // TODO implement printing of elements using rotate()

};
#endif //LINKEDLIST_H
