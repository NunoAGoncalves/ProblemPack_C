#include <stdio.h>
#include <math.h>

//Question 2

// Declaration of all functions used
double calculatePrintEuclideanDistance();

int main(void) {
  // Parameter can be changed as appropriate below
  calculatePrintEuclideanDistance(0, 0, 3, 4);
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