#include <stdio.h>
#include "numc.h"
#include "src/activations/activations.h"

int main() {
    Matrix *m = create_matrix(2, 2);
    fill_matrix(m, 1);
    print_matrix(m);
    printf("%lf", sigmoid(0.5));
    free_matrix(m);
    return 0;
}
