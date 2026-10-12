#include <stdio.h>

int fib_asm(int a); // recursive fibonacci function

int main(){
  for (int i = 0; i < 10; i++){
    printf("fib(%d) = %d\n", i, fib_asm(i));
  }
  return 0;
}
  
