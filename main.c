#include <stdio.h>
#include "numc.h"
#include "src/activations/activations.h"
#include "src/nn/architecture.h"
#include "src/nn/nn.h"

int main() {
    nn* n = create_nn(5, 5, 6, 7, 8, 10);
    print_matrix(n->w1);
    free_nn(n);
    return 0;
}
