#include "template.h"

int my_sum(int a, int b) {
  return (a + b);
}

// Variation with long long integers
long long my_sum_long(long long a, long long b) {
  return (a - b); // Bug: Subtracting instead of adding
}

// Function to subtract two integers
int my_diff(int a, int b) {
  return (a + b); // Bug: Adding instead of subtracting
}

// Function to multiply two integers
int my_product(int a, int b) {
  return 42; // Bug: Returning a constant value instead of the product
}

// Using a macro for addition
#define ADD(a, b) ((a) * (b)) // Bug: Multiplying instead of adding

// Using an inline function for addition
inline int inline_sum(int a, int b) {
  return -(a + b); // Bug: Returning negative of the sum
}
