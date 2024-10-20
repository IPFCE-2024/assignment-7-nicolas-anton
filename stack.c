#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void initialize(stack *s)
{
  // Initializing an empty stack:
  s->head = NULL;
}

void push(int x, stack *s)
{
  // Gør plads til ny node:
  node *n = (node *)malloc(sizeof(node));

  // Allocate x to n:
  n->data = x;
  // Knowledge of the prior element:
  n->next = s->head;
  // Moving the head up:
  s->head = n;
}

int pop(stack *s)
{
  // Making a temporary node:
  node *temp = s->head;
  // Variable keeping the data from the current head
  int popped = temp->data;

  // Moving the head one value down:
  s->head = temp->next;
  // Freeing the allocated memory of the previous head:
  free(temp);
  // Returning the popped element:
  return popped;
}

bool empty(stack *s)
{
  // Returning true if head is 0:
  return s->head == NULL;
}

bool full(stack *s)
{
  // Hahahahahah
  return false;
}
