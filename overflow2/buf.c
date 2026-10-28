#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

// Goal: make it print "That is correct!"

int secret;

int getNumber(){
  char buffer[20];
  printf("Guess a number:\n");
  gets(buffer);
  int num = atoi(buffer);
  return num;
}

int main(int argc, char** argv) {
  int fd = open("/dev/urandom", O_RDONLY);
  if(fd == -1){
    fprintf(stderr, "Unable to open file\n");
    return -1;
  }
  if(read(fd, &secret, sizeof(int)) != sizeof(int)){
    fprintf(stderr, "Read error!\n");
    return 1;
  }
  close(fd);
  
  int guess = getNumber();
  if (guess == secret){
    printf("That is correct!\n");
    exit(0);
  }
  else{
    printf("Incorrect, secret = 0x%x\n", secret);    
  }
  return 0;
}
