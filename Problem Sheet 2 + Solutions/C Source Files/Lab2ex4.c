#include <stdio.h>
#include <string.h>

// Function that prints out the reverse of a string
// Used <stdio.h> library to print out string
// Used <string.h> library to find string length
void Palindrome(char string1[]){
  int length_of_string1 = strlen(string1);

  for (int i = 0; i < (length_of_string1/2); i++) { // Compares the last character to the first character until it reaches the middle
    if (string1[i] != string1[length_of_string1 - i - 1]) { // If first half of the string does not equal the last half of the string
      printf("%s is not a palindrome\n", string1);
      return;
    }
  }

  printf("%s is a palindrome\n", string1);
}

int main(void) {
  char palindrome[] = "hannah";
  Palindrome(palindrome);
}


