//
// Created by manroy on 02/11/2024.
//

#ifndef NODE_H
#define NODE_H
#include "song.h"

struct node {
    Song* song;
    node* prev;
    node* next;
};
#endif //NODE_H
