#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(){
  // TODO: allocate array on the heap
  int *ary = malloc(sizeof(int)*10);
  // initialize it using pointer notation
  int *temp = ary;
  int i = 0;
  while (i < SIZE){
    *temp = i+1;
    printf("temp = %p\n", temp);
    temp++;
    i++;
  }
  // access and sum its elements using array notation
  int sum = 0;
  for (i=0; i < SIZE; i++){
    printf("ary[%d] = %d\n", i, *(ary + i));
    sum += ary[i];
  }
  printf("sum = %d\n", sum);
  // recall: ary[i] = *(ary+i)
  return 0;
}
