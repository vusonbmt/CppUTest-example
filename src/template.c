#include "template.h"

int my_sum(int a, int b) {
  return (a + b);
}

// Variation with long long integers
long long my_sum_long(long long a, long long b) {
  return (a + b);
}

// Function to subtract two integers
int my_diff(int a, int b) {
  return (a - b);
}

// Function to multiply two integers
int my_product(int a, int b) {
  // Check for potential overflow
  if ((a > 0 && b > 0 && a > INT_MAX / b) || 
      (a < 0 && b < 0 && a < INT_MAX / b) ||
      (a > 0 && b < 0 && b < INT_MIN / a) ||
      (a < 0 && b > 0 && a < INT_MIN / b)) {
    // Handle overflow (e.g., return error code or use errno)
    return 0; // Or appropriate error handling
  }
  return (a * b);
}

// Using a macro for addition
#define ADD(a, b) ((a) + (b)) // Bug: Multiplying instead of adding

// Using an inline function for addition
inline int inline_sum(int a, int b) {
  return (a + b); 
}
