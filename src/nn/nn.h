#pragma once

#include "numc.h" 
#include "architecture.h" 

nn* create_nn(const int input, const int hidden_1, const int hidden_2, const int hidden_3, const int hidden_4, const int output);
void free_nn(nn* n);