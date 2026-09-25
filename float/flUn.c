#include <stdio.h>

int main(){
  union floatBytes{
    int bytes;
    float num;
  } val;
  float a;
  printf("Enter a float:\n");
  scanf("%f",&a);
  val.num = a;
  printf("0x%x\n", val.bytes);
  return 0;
}
