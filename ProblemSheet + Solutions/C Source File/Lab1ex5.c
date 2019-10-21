#include <stdio.h>
#include <stdlib.h>

//Question 5

// Declaration of all functions used
int SumSquared();
int SquaredSum();
int differenceSumSquared_SquaredSum();

int main(void) {
  // Parameter can be changed as appropriate below
  differenceSumSquared_SquaredSum(10);
}

// Function to calculate the sum of the squares for all integers up to the number, n
// No explicit library used
int SumSquared(int n) {
  int SumSquared_upto_n = (n*(n+1)*((2*n)+1))/6; // Math formula for the sum of square n numbers

  return SumSquared_upto_n;
}

// Function to calculate the square of the sum for all integers up to the number, n
// No explicit library used
int SquaredSum(int n) {
  int Sum_upto_n = (n*(n+1))/2; // Math formula for the sum of n numbers
  int SquaredSum_upto_n = Sum_upto_n * Sum_upto_n;

  return SquaredSum_upto_n;
}

// Function to calculate, and print, the difference between the square of the sum and the sum of the square up until natural number, n, is reached
// Used <stdlib.h> to find modulus of the variable, difference
int differenceSumSquared_SquaredSum(int n) {
  int SumSquared_upto_n = SumSquared(n);
  int SquaredSum_upto_n = SquaredSum(n);

  int difference = SumSquared_upto_n - SquaredSum_upto_n;
  difference = abs(difference); // Difference between integer is always positive

  if (n < 0) {
    printf("Invalid parameter given (must be natural)\n"); // According to ISO, negative numbers are not natural numbers, but 0 is
    return n;
  }

  printf("Square Sum - Sum Square for the first %d natural number(s) = %d\n",n, difference);
  return abs(difference);
}