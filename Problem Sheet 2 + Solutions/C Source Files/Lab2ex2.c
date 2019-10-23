#include <stdio.h>
#include <string.h>

// Function that converts an octal, represented as a char array, into its decimal value
// Used <stdio.h> library to print out statement
// Used <string.h> library to find string length
int octalToDec(char octal[]){
  int total = 0;
  int octal_length = strlen(octal);

  for (int i = 1; i <= octal_length; i++){
    int octal_value = (int)(octal[octal_length - i] - '0');  

    if (i - 1 > 0) { // Must be in the tenths column to be multipled
      int individual_total = (octal_value) * ((i - 1)*8);
      total = total + individual_total;
    }
    else { //Otherwise do not multiply
      int individual_total = octal_value;
      total = total + individual_total;
    }
  }

  printf("Oct %s = Dec %d\n", octal, total);
  return total;
}

int main(void) {
  char octal_number[] = "10";
  octalToDec(octal_number);
}


