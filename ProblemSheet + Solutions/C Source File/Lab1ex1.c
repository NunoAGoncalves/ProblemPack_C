#include <stdio.h>
#include <math.h>

//Question 1

// Declaration of all functions used
int isIntegerEven();
int isIntegerPrime();
void printOddEvenAndOrPrime();

int main(void) {
  // Parameter can be changed as appropriate below
  printOddEvenAndOrPrime(2);
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

// * - There are differing opinions online as to whether a negative number can or cannot be a prime, but for the purpose of this exercise I have decided that negative numbers cannot ever be prime. Zero is not considered prime