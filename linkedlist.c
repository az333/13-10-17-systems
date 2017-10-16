#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

void print_list (struct node *p){
  while (p) {
    printf ("%d\n", p -> value);
    p = p -> next;
  }
}

struct node * insert_front(struct node *p, int i){
  struct node *first = (struct node *)malloc(sizeof(struct node));
  first -> next = p;
  first -> value = i;
  return first;
}

struct node * free_list(struct node *p){
  struct node *head = p;
  while (head){
    struct node *temp = head;
    head = head -> next;
    free(temp);
  }
  p = NULL;
  return p;
}
