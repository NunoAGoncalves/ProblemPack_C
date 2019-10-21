#include <stdio.h>


//Question 3 

// Declaration of all functions used
int getRemainderIteration();

int main(void) {
  // Parameter can be changed as appropriate below
  getRemainderIteration(5, 3); // (a, b) = a % b
}

// Function to find, and print, the remainder after division of one integer, b, by another integer, a (using iteration)
// Used <stdio.h> library to print out statements
int getRemainderIteration(int a, int b) {
  if (a <= 0 || b <= 0) {
    printf("Invalid parameter given (must be positive)\n");
    return 0;
  }

  int temporarystore_of_a = a;

  while (a >= b) {
    a = a - b;
  }

  printf("%d %% %d = %d\n", temporarystore_of_a, b, a);
  return a;
}

// Question 3 and Question 4 are restricted in that their functions must have an iterative or recursive component. This means that the general formula for remainders, x - (x // y) * y, cannot be used, which prevents the getRemainderIteration() and getRemainderRecursion() functions from working succesfully with negative numbers (bar the use of a lot of if statements). Because of this restriction, I have eliminated negative numbers from my input