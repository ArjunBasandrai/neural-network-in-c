#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "numc.h"
#include "activation.h"

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

double swish(double x) {
    return x * sigmoid(x);
}

double relu(double x) {
    return max(0, x);
}

double leaky_relu(double x) {
    return max(0.01 * x, x);
}

double nn_tanh(double x) {
    return (2 / (1 + exp(-2 * x))) - 1;
}

Matrix* softmax(Matrix* x) {
    Matrix* result = create_matrix(x->rows, x->cols);
    double sum = 0;
    for (int i = 0; i < x->rows; i++) {
        for (int j = 0; j < x->cols; j++) {
            sum += exp(x->data[i][j]);
        }
    }
    for (int i = 0; i < x->rows; i++) {
        for (int j = 0; j < x->cols; j++) {
            result->data[i][j] = exp(x->data[i][j]) / sum;
        }
    }
    return result;
}