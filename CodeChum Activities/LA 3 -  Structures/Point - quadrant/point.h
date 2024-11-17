//
// Created by manroy on 17/11/2024.
//

#ifndef POINT_H
#define POINT_H
#include <math.h>

struct Point {
    int x;
    int y;

    // TODO create quadrant method here

    int quadrant(){
        if(x==0&&y==0){
            return 0;
        }
        else if(x>0&&y>0){
            return 1;
        }
        else if(x<0&&y>0){
            return 2;
        }
        else if(x<0&&y<0){
            return 3;
        }
        else if(x>0&&y<0){
            return 4;
        }
        else{
            return -1;
        }
    }

};

typedef Point point;
#endif //POINT_H
