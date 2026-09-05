#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLower(char str[]){
  // TODO: convert upper case letters in str to lower case in-place
}

char *toLowerCpy(char str[]){
  // TODO: make a copy of str, convert upper case -> lower case, and return a pointer to it
  return NULL; // change this
}

int main(){
  char str1[] = "Hello, World!";
  char *str2 = "Hello, World!";
  printf("BEFORE: str1 = %s\n", str1);
  toLower(str1);
  printf("AFTER: str1 = %s\n", str1);
  printf("BEFORE: str2 = %s\n", str2);
  toLower(str2);
  printf("AFTER: str2 = %s\n", str2);
  return 0;
}
