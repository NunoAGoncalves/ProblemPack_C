#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Declaration of all functions used
int isIntegerEven();
int isIntegerPrime();
void printOddEvenAndOrPrime();
double calculatePrintEuclideanDistance();
int getRemainderIteration();
int getRemainderRecursion();
void printRemainderRecursion();
int SumSquared();
int SquaredSum();
int differenceSumSquared_SquaredSum();

int main(void) {
  // Parameter can be changed as appropriate below
  printOddEvenAndOrPrime(2);
  calculatePrintEuclideanDistance(0, 0, 3, 4);
  getRemainderIteration(5, 3); // (a, b) = a % b
  printRemainderRecursion(5, 3); // (a, b) = a % b
  differenceSumSquared_SquaredSum(10);
}

// Function used to check whether a given integer, n, is even
// No explicit library used
int isIntegerEven(int n) {
  if (n % 2 == 0) {
    return 1;
  }
  return 0;
}

// Function used to check whether a given integer, n, is prime
// Used <math.h> library to square root n
int isIntegerPrime(int n) {
  int squareroot_of_n = sqrt(n); // Factor must exist below the square root for n to be prime
  
  if (n <= 0) { // Zero and negative numbers are not considered prime *
    return 0;
  }

  for (int i = 2; i <= squareroot_of_n; i++) {
    if (n % i == 0) {
      return 0; 
    }
  }
  return 1;
}

// Function to find, and print, whether a given integer, n, is either odd or even and/or prime
// Used <stdio.h> library to print out statement
void printOddEvenAndOrPrime(int n) {
  if (isIntegerEven(n) && isIntegerPrime(n)) {
    printf("%d is even and prime\n", n);
  }
  else if (isIntegerEven(n)) {
    printf("%d is even and not prime\n", n);
  }
  else if (isIntegerPrime(n)) {
    printf("%d is odd and prime\n", n);
  }
  else {
    printf("%d is odd and not prime\n", n);
  }
}

// Function to calculate, and print, the Euclidean distance between two given points, (x1, y1) (x2, y2)
// Used <math.h> library to square and square root variables
double calculatePrintEuclideanDistance(int x1, int y1 , int x2, int y2) {
  int dx = x2 - x1;
  int dy = y2 - y1;
 
  int distancesquared = pow((dx), 2) +  pow((dy), 2); 
  double distance = sqrt(distancesquared);

  printf("Euclidean distance for points (%d,%d) and (%d,%d) = %0.2f\n", x1, y1, x2, y2, distance);
  return distance;
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

// Function to findthe remainder after division of one integer, a, by another integer, b (using recursion)
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
