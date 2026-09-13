#include <stdio.h>
#include <stdlib.h>

int sumAry(int ary[], int len);

#define SIZE 5

int main(){  
  int ary[SIZE];
  printf("sizeof(ary) = %ld bytes\n", sizeof(ary));
  for (int i = 0; i < SIZE; i++){
    ary[i] = i+1;
    printf("ary[%d] = %d\n",i,ary[i]);
  }
  printf("sum = %d\n", sumAry(ary, SIZE));
}

int sumAry(int ary[], int len){
  // TODO: compute the sum of the elements in the array
  int sum = 0;
  for (int i = 0; i < len; i++){
    sum += ary[i];
  }
  return sum;
}
