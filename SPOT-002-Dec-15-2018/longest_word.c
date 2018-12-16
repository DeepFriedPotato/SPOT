#include <stdio.h>
#include <stdbool.h>

// Write a function that takes an input string, and print the 
//longest word.

void longest_word(char *sen) {
  int count_curr = 0;
  int count_max = 0;

  char *loc_of_longest_word = sen;
  while (*sen != '\0') {
    count_curr++;
    if ((*sen == ' ') || (*sen == '\n')) {
      if (count_curr > count_max) {
        count_max = count_curr;
        loc_of_longest_word = sen;
      }
      count_curr = 0;
    }
    sen++;
  }

  while ((*loc_of_longest_word != '\0') && (*loc_of_longest_word != ' ')) {
    printf("%c", *loc_of_longest_word);
    loc_of_longest_word++;
  }
}


int main() {
  printf("What's your input string?\n");
  char input[100];
  scanf("%100[^\n]", input);
  printf("Your input is %s.\n", input);
  longest_word(input);
}


