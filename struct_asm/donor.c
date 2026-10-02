#include <stdio.h>
#include <stdlib.h>

struct donor_struct {
  char type[4];
  int age;
};

typedef struct donor_struct *donor;

extern void donor_set(donor p, char *type, int age);

int main(int argc, char *argv[]){
  int age = atoi(argv[2]);
  donor p = malloc(sizeof(struct donor_struct));
  donor_set(p,argv[1],age);
  printf("Blood type = %s\n", p->type);
  printf("Age = %d\n", p->age);
  return 0;
}
