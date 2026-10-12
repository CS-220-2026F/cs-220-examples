#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
  // TODO: set ptr_i to ptr_v and ptr_l to ptr_i
  // Make sure there are no warnings
  void *ptr_v = malloc(8);
  int *ptr_i;
  long *ptr_l;
  // TODO: set the values to which ptr_i and
  // ptr_i+1 point to 100 and 200 respectively,
  // and print *ptr_i and *ptr_l
  // again, make sure there are no warnings

  printf("*ptr_i = 0x%08x, *ptr_l = 0x%016lx\n", *ptr_i, *ptr_l);
  
  // TODO: clear the lower 13 bits of ptr_v
  printf("BEFORE: ptr_v = %p\n", ptr_v);
  printf("AFTER: ptr_v = %p\n", ptr_v);
  
  return 0;
}
