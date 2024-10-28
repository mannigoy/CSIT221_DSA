//
// Created by manroy on 28/10/2024.
//

#ifndef ARRAYLIST_H
#define ARRAYLIST_H
// TODO change this to handle char elements

#include <iostream>
#include <cstdlib>
#include <math.h>
#include "list.h"
using namespace std;

class ArrayList : public List {
    char* array;
    int size;
    int capacity = 5;

    void dynamic_add() {
        int new_size = ceil(capacity * 1.5);
        char* new_array = (char*) realloc(array, sizeof(char) * new_size);
        array = new_array;
        capacity = new_size;
    }

    void dynamic_deduce() {
        int new_size = ceil(capacity * 0.75);
        char* new_array = (char*) realloc(array, sizeof(char) * new_size);
        array = new_array;
        capacity = new_size;
    }

public:
    // constructor
    ArrayList() {
        array = (char*) calloc( capacity, sizeof(char) );
        size = 0;
    }

    void add(char num) {
        if(size==capacity){
            dynamic_add();
        }
        array[size++]=num;

    }

    int _size() {
        return size;
    }

    char removeLast() {
        if(size==0){
            return ' ';
        }

        return array[--size];



    }


    int removeFirst() {
        // NOT NECESSARY
        return 0;
    }

    int remove(int num) {
        // NOT NECESSARY
        return 0;
    }

    char get(int pos) {
        return array[pos-1];
    }

    void print() {
        int i;
        for (i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        for (; i < capacity; i++) {
            cout << "? ";
        }
        cout << endl;
    }
};
#endif //ARRAYLIST_H
