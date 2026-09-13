#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLower(char str[]){
  // TODO: convert upper case letters in str to lower case in-place
  int len = strlen(str);
  for (int i = 0; i < len; i++){
    if (str[i] >= 0x41 && str[i] <= 0x5a){
      str[i] += 0x20;
    }
  }
}

char *toLowerCpy(char str[]){
  // TODO: make a copy of str, convert upper case -> lower case, and return a pointer to it
  char *newStr = malloc((strlen(str)+1)*sizeof(char));
  strcpy(newStr,str);
  toLower(newStr);
  return newStr;
}

int main(){
  char str1[] = "Hello, World!";
  char *str2 = "Hello, World!";
  printf("BEFORE: str1 = %s\n", str1);
  toLower(str1);
  printf("AFTER: str1 = %s\n", str1);
  char *str3 = toLowerCpy(str2);
  printf("ORIGINAL: str2 = %s\n", str2);
  printf("NEW: str3 = %s\n", str3);
  free(str3);
  return 0;
}
