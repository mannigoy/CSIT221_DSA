//
// Created by manroy on 02/11/2024.
//

#ifndef SONG_H
#define SONG_H
#include <iostream>
using namespace std;
struct Song {
    string title;
    bool fave;
    int played = 0;
    string artist[2];

    void print() {
        cout << title << " by ";
        if (artist[1] == "na") {
            cout << artist[0];
        } else {
            cout << artist[0] << ", " << artist[1];
        }
        cout << " #" << played;
        if (fave) {
            cout << " *";
        }
    }

};
#endif //SONG_H
