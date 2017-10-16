#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){

  struct node * list = NULL;
  printf("Current list:\n");
  print_list(list);

  for (int i = 0; i < 10; i++)
    list = insert_front(list,i);

  printf("Current list:\n");
  print_list(list);

  printf("Freed list:\n");
  print_list(free_list(list));

  return 0;

}
