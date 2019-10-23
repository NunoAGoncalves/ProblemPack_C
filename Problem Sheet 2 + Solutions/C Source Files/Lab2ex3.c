#include <stdio.h>

// Function that prints out a tree shape. Takes argument 
// Used <stdio.h> library to print out statement
void printTree(int tree_width, int trunk_height) {
  int k = 0;
  int tree_height = (tree_width + 1)/2; // Used the inverse function of 2n + 1 to convert the tree width into the height of the tree from the trunk


  for (int i = 1; i <= tree_height; i++, k = 0 ) { // For every line on the triangle (tree)

    for (int no_of_spaces = 1; no_of_spaces <= tree_height - i; no_of_spaces++) {
      printf(" ");
    }

    while (k != (2*i) - 1) { // While K has not reached an odd number
      printf("*");
      ++k;
    }

    printf("\n");
  }

  for (int i = 0; i < trunk_height; i++) {
    for (int n = 0; n <= tree_height - 3; n++) {
      printf(" ");
    }

    printf("***\n");
  }
}

int main(void) {
  int tree_width = 15;
  int trunk_height = 5;
  printTree(tree_width, trunk_height);
}

