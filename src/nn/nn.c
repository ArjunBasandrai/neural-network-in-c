#include <stdio.h>
#include <stdlib.h>

#include "numc.h"
#include "architecture.h"
#include "nn.h"

nn* create_nn(const int input, const int hidden_1, const int hidden_2, const int hidden_3, const int hidden_4, const int output) {
    nn* n = malloc(sizeof(nn));
    n->input = input;
    n->hidden_1 = hidden_1;
    n->hidden_2 = hidden_2;
    n->hidden_3 = hidden_3;
    n->hidden_4 = hidden_4;
    n->output = output;
    n->w1 = create_matrix(hidden_1, input);
    n->w2 = create_matrix(hidden_2, hidden_1);
    n->w3 = create_matrix(hidden_3, hidden_2);
    n->w4 = create_matrix(hidden_4, hidden_3);
    n->wout = create_matrix(output, hidden_4);
    n->b1 = create_matrix(hidden_1, 1);
    n->b2 = create_matrix(hidden_2, 1);
    n->b3 = create_matrix(hidden_3, 1);
    n->b4 = create_matrix(hidden_4, 1);
    n->bout = create_matrix(output, 1);

    initialize_weights(n->w1, RELU, n->hidden_1);
    initialize_weights(n->w2, RELU, n->hidden_2);
    initialize_weights(n->w3, RELU, n->hidden_3);
    initialize_weights(n->w4, RELU, n->hidden_4);
    initialize_weights(n->wout, SOFTMAX, n->output);

    initialize_weights(n->b1, RELU, n->hidden_1);
    initialize_weights(n->b2, RELU, n->hidden_2);
    initialize_weights(n->b3, RELU, n->hidden_3);
    initialize_weights(n->b4, RELU, n->hidden_4);
    initialize_weights(n->bout, SOFTMAX, n->output);
    return n;
}

void free_nn(nn* n) {
    free_matrix(n->w1);
    free_matrix(n->w2);
    free_matrix(n->w3);
    free_matrix(n->w4);
    free_matrix(n->wout);
    free_matrix(n->b1);
    free_matrix(n->b2);
    free_matrix(n->b3);
    free_matrix(n->b4);
    free_matrix(n->bout);
    free(n);
}