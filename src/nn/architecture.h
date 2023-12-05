#pragma once

#include "numc.h"

typedef struct {
    int input;
    int hidden_1;
    int hidden_2;
    int hidden_3;
    int hidden_4;
    int output;
    Matrix* w1;
    Matrix* w2;
    Matrix* w3;
    Matrix* w4;
    Matrix* b1;
    Matrix* b2;
    Matrix* b3;
    Matrix* b4;
    Matrix* wout;
    Matrix* bout;
} nn;
