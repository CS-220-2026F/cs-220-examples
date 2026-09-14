#include <stdio.h>
#include <stdlib.h>

int main(){
  union intBytes{
    int val;
    unsigned char bytes[4];
  } num;
  // TODO: print the bytes of num in order
  num.val = 0x44332211;
  for (int i = 0; i < sizeof(int); i++){
    printf("byte %d = 0x%x\n", i, num.bytes[i]);
  }
  num.bytes[2] = 0x77;
  printf("num.val = 0x%x\n", num.val);
  return 0;
}
