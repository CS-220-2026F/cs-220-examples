#include <stdio.h>
#include <stdlib.h>

int sumAry(int ary[]);

#define SIZE 5

int main(){
  
  int ary[SIZE];
  for (int i = 0; i < SIZE; i++){
    ary[i] = i+1;
    printf("ary[%d] = %d\n",i,ary[i]);
  }
  printf("sum = %d\n", sumAry(ary));
}

int sumAry(int ary[]){
  // TODO: compute the sum of the elements in the array
  return 0; // change this
}
