#include <stdio.h>

int main(){
  int num = 100;
  printf("value of num = %d, address of num = %p\n", num, &num);
  int *ptr = &num; // "int *" means pointer to an int
  // & is the reference operator
  printf("value of ptr = %p, address of ptr = %p\n", ptr, &ptr);
  printf("ptr points to %d\n", *ptr); // * is the dereference operator
  *ptr = 200;
  printf("value of num = %d, address of num = %p\n", num, &num);
  return 0;
  
}
