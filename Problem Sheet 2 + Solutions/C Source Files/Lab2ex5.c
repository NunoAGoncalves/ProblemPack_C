#include <stdio.h>
#include <math.h>
#include <stdbool.h> 

bool boolean_array[1000]; // global variable array

// Function to use the algorithm of Seve of Eratosthenese to print out 
// Used <math.h> library to square root the integer, n
// Used <stdbool.h> to denote true and false values
void Sieve_of_Eratosthenes(int n) {
  for (int i = 0; i < n; i++) {
    boolean_array[i] = true; // Assigns all boolean values in the array as true initially
  }

  int squareroot_of_n = sqrt(n); 

  for (int i = 2; i < squareroot_of_n; i++) {
    if (boolean_array[i] == (true)) { // If this boolean value is true, make the multiple of that boolean position false
      for (int j = i*i; j < n; j += i) {
        boolean_array[j] = false;
      }
    }
  }
}

void Print_Sieve_of_Eratosthenes(int n) {

  Sieve_of_Eratosthenes(n); 

  for (int i = 2; i <= n; i++) { // Sieve of Eratosthenes starts at 2
    if (boolean_array[i] == (true)) {
      printf("%d is prime.\n", i);
    }
    else {
      printf("%d is not prime.\n", i);
    }
  }
}

int main(void) {
  int up_until_n = 100;
  Print_Sieve_of_Eratosthenes(up_until_n);
}

