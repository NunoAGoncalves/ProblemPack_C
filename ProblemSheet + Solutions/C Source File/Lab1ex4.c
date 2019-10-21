#include <stdio.h>


//Question 4

// Declaration of all functions used
int getRemainderRecursion();
void printRemainderRecursion();

int main(void) {
  // Parameter can be changed as appropriate below
  printRemainderRecursion(5, 3); // (a, b) = a % b
}

// Function to find the remainder after division of one integer, a, by another integer, b (using recursion)
// No explicit library used
int getRemainderRecursion(int a, int b) {
  if (a < b) {
    return a;
  } 
  return getRemainderRecursion(a - b, b);
}

// Function to print the remainder and validate the input given by the user (improved efficiency if validation is done outside recursion)
// Used <stdio.h> library to print out statements
void printRemainderRecursion(int a, int b) {
  if (a <= 0 || b <= 0) {
    printf("Invalid parameter given (must be positive)\n");
  }
  else {
      printf("%d %% %d = %d\n", a, b, getRemainderRecursion(a, b)); // *
  }
}

// copy: Question 3 and Question 4 are restricted in that their functions must have an iterative or recursive component. This means that the general formula for remainders, x - (x // y) * y, cannot be used, which prevents the getRemainderIteration() and getRemainderRecursion() functions from working succesfully with negative parameters (bar the use of a lot of if statements). Because of this restriction, I have eliminated negative numbers from my input.

// * - A print statement in the form of a % b = c cannot be done within the recursive function as the first call within the function is removed. This is the primary reason as to why I decided to split the getRemainderIteration function into two