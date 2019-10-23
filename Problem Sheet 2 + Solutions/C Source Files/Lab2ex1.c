#include <stdio.h>
#include <string.h>

// Function that prints out the reverse of a string
// Used <stdio.h> library to print out statement
// Used <string.h> library to find string length 
void ReverseArray(char string1[]){
  int length_of_string1 = strlen(string1) - 1; // Last character of array must be removed to obtain the correct length of string1
  char string2[length_of_string1]; 

  for (int i = 0; string1[i] != '\0'; i++) {
    string2[i] = string1[length_of_string1 - i]; // Assigns the last characters of string1 to the first characters of string2
  }
  
  string2[length_of_string1 + 1] = '\0'; // Necessary to declare the end of the string

  printf("%s\n", string2); 
}

int main(void) {
  char sentence[] = "This is reversed";
  ReverseArray(sentence);
}
