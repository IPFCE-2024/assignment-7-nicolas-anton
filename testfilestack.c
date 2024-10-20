#include "stack.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

// Declaring the stack:
stack *s;

void empty_test()
{
    s = (stack *)malloc(sizeof(stack));
    // Checking if the list is empty. Meaning that initialize function works.
    initialize(s);
    assert(empty(s));
}

void test_number_2()
{
    // Variables:
    int x = 5;
    int y;

    // Saving the head to check after executing push and pop.
    node *head = s->head;

    // Executing the commands:
    push(x, s);
    y = pop(s);

    // Checking if the head is the same as before the executions:
    assert(s->head == head);

    // Checking if x and y are equal:
    assert(x == y);
}

void test_number_3()
{
    // Variables:
    int y, x0 = 5, x1 = 10, y0, y1;

    // Saving the head to check after executing push and pop.
    node *head = s->head;

    // Executing two push commands and popping again:
    push(x0, s);
    push(x1, s);
    y0 = pop(s);
    y1 = pop(s);

    // Checking if the head is the same as before the executions:
    assert(s->head == head);

    // Checking if x0 equals y1 and x1 equals y0:
    assert(x0 == y1 && x1 == y0);
}

int main()
{
    // Running the tests:
    empty_test();
    test_number_2();
    test_number_3();

    // Printing succesfull if all tests are passed:
    printf("Every law holds\n");

    return 0;
}

