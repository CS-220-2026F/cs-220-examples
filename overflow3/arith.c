#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int add(int a, int b) {return a + b;}
int sub(int a, int b) {return a - b;}
int mul(int a, int b) {return a * b;}
int quo(int a, int b) {return a / b;}
int rem(int a, int b) {return a % b;}
int tar(int a, int b) {printf("target found!\n"); exit(0); return a + b;}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  char ops[] = {'+', '-', '*', '/', '%'};
  int (*funcs[])(int,int) = {add,sub,mul,quo,rem};
  // TODO: Craft a message that will overflow buf and overwrite
  // the address of the 'add' function in funcs with 'tar' 
  char buffer[20];
  printf("What operation would you like to perform?\n");
  gets(buffer);
  int i=0;
  switch(buffer[0]){
  case 'a':
    i = 0;
    break;
  case 's':
    i = 1;
    break;
  case 'm':
    i = 2;
    break;
  case 'd':
    i = 3;
    break;
  case 'r':
    i = 4;
    break;
  default:
    printf("unrecognized operation\n");
    return 0;
  }
  printf("%d %c %d = %d\n",a,ops[i],b, (*funcs[i])(a,b));
  
  return 0;
}
