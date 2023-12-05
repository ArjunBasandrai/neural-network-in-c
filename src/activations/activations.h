#pragma once

#include "numc.h"

double sigmoid(double x);
double swish(double x);
double relu(double x);
double leaky_relu(double x);
double nn_tanh(double x);

Matrix* softmax(Matrix* x);