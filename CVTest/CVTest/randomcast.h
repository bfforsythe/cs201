// Brandon Forsythe
// 4/21/21

// Header for a die cast for RGB values in CVTEST



#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>

std::vector<int> castVal;


void randomGen() {
    srand(time(NULL));

    for (int colors = 0; colors < 3; colors++) {
        // Get a pseudo-random number in [0,255]
        int num = (rand() % 256);

        castVal.push_back(num);

    }
}