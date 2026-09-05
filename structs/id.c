#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
  char name[20];
  int age;
};

void printPerson(struct person p){
  // TODO: print each field in the struct
  printf("name = %s\n", p.name);
  printf("age = %d\n", p.age);
}

// TODO: write a constructor
struct person *createPerson(char *name, int age){
  struct person *p = malloc(sizeof(struct person));
  strcpy(p->name, name);
  p->age = age;
  return p; 
}

int main(){
  // TODO: initialize three person structs in three different ways
  struct person p1 = {"Alice", 51};
  printPerson(p1);
  struct person p2;
  strcpy(p2.name,"Bob");
  p2.age = 27;
  printPerson(p2);
  struct person *p3 = createPerson("Charles", 38);
  printPerson(*p3);
  free(p3);
  return 0;
}
