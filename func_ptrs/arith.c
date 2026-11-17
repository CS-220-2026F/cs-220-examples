#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) {return a + b;}
int sub(int a, int b) {return a - b;}
int mul(int a, int b) {return a * b;}
int quo(int a, int b) {return a / b;}
int rem(int a, int b) {return a % b;}

#define NUM 5

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  char ops[] = {'+', '-', '*', '/', '%'};
  // TODO: make an array of function pointers for each of
  // of the above arithmetic operations, loop through and
  // execute each
  int (*funcs[])(int,int) = {add,sub,mul,quo,rem};
  for (int i = 0; i < NUM; i++){
    printf("%d %c %d = %d\n", a, ops[i], b, funcs[i](a,b));
  }
  return 0;
}
