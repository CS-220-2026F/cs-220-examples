#include <stdio.h>

int main(){
  // TODO: read numbers from stdin, sum them
  // until EOF is read, print the sum
  int num;
  int sum = 0;
  while (1){
    int res = scanf("%d", &num); // store the number in the num variable
    if (res == 1){ // successfully read an int
      sum += num;
    }
    if (res == -1){
      break; // break from loop if EOF is read
    }
  }
  printf("sum = %d\n", sum);
  return 0;
}
