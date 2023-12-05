#pragma once

#define PI 3.14159265358979323846
#define E 2.71828182845904523536

typedef struct {
    int rows;
    int cols;
    double **data;
} Matrix;

enum activation {
    SIGMOID,
    RELU,
    TANH,
    SOFTMAX,
    LINEAR,
    NONE
};

// Create an empty matrix of size rows x cols
Matrix *create_matrix(int rows, int cols);
// Free the memory allocated to a matrix
void free_matrix(Matrix *m);
// Print the matrix to stdout
void print_matrix(Matrix *m);
// Create a deep copy of a matrix
Matrix* copy_matrix(Matrix* m);
// Fill a matrix with a given value
void fill_matrix(Matrix* m, double value);
// Fill a matrix with 0
void zeros_matrix(Matrix* m);

// Check if a matrix is a square matrix
int is_square_matrix(Matrix* m);
// Create an identity matrix
void identity_matrix(Matrix* m);

// Save a matrix to a file
void save_matrix(const Matrix* m, const char* filename);
// Load a matrix from a file
Matrix* load_matrix(const char* filename);

// Flatten a matrix into a vector alogn a given axis
Matrix *flatten(Matrix *m, int axis);
// Reshape a matrix into a new shape
Matrix* reshape(Matrix *m, int rows, int cols);

// Intialize the random weights of a matrix based on the activation function
void initialize_weights(Matrix* matrix, int activation, int n, ...);

// Find the argument of the maximum value in a matrix
int argmax(Matrix *m);

// Element-wise cosine of a matrix
void mcos(Matrix *m, int in_deg);
// Element-wise sine of a matrix
void msin(Matrix *m, int in_deg);
// Element-wise tangent of a matrix
void mtan(Matrix *m, int in_deg);
// Element-wise log of a matrix
void mlog(Matrix *m);
// Element-wise log of a matrix with a given base
void mlog_base(Matrix *m, double base);
// Element-wise exponentiation of a matrix 
void mexp(Matrix *m);

// Transpose a matrix
Matrix* transpose(Matrix *m);

// Add two matrices
Matrix* add(Matrix *m1, Matrix *m2);
// Add a scalar to a matrix
Matrix* add_scalar(Matrix *m1, double n);
// Subtract two matrices
Matrix* subtract(Matrix *m1, Matrix *m2);
// Multiply two matrices
Matrix* multiply(Matrix *m1, Matrix *m2);
// Divide two matrices
Matrix* divide(Matrix *m1, Matrix *m2);
// Multiply a matrix by a scalar
Matrix* scale(Matrix *m1, double n);

// Matrix dot product
Matrix* dot(Matrix *m1, Matrix *m2);