#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Write a function that takes an input string, and print the 
//longest word.

void longest_word(char *sentence) {
  int count_max = 0;
  char *sen_cpy = calloc(strlen(sentence) + 1, sizeof(char));
  strcpy(sen_cpy, sentence);

  char *longest_word = sen_cpy;

  for (char *p = sen_cpy; *p; p++) {
    if (!isalpha(*p)) {
      *p = ' ';
    }
  }
  
  char *token = strtok(sen_cpy, " ");
  while (token) {
    //printf("token: %s\n", token);
    int len = strlen(token);
    if (len > count_max) {
      count_max = len;
      longest_word = token;
    }
    token = strtok(NULL, " ");
  }

  printf("%s\n", longest_word);
  free(sen_cpy);
  sen_cpy = NULL;
}


int main() {
  printf("What's your input string?\n");
  char input[100];
  scanf("%100[^\n]", input);
  printf("Your input is %s.\n", input);
  longest_word(input);
}


