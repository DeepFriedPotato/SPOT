#include <stdio.h>


// Write a function that takes an input string, and print the 
//longest word.

void longest_word(char *sentence) {
  

}


int main() {
  printf("What's your input string?\n");
  char input[100];
  scanf("%100[^\n]", input);
  printf("Your input is %s.\n", input);
  longest_word(input);
}


