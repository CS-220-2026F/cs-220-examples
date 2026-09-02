#include <stdio.h>
#include <stdlib.h>

void foo(){
  // TODO: Print the number of times this function has been called
  static int count = 0;
  count++;
  printf("function has been called %d times\n", count);
}

int main(int argc, char *argv[]){
  // take a number as a command line argument and
  // call foo() that many times
  int n = atoi(argv[1]);
  for (int i = 0; i < n; i++){
    foo();
  }
  return 0;
}
