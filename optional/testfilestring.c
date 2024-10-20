#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "string.h"

void length_test()
{
    assert(length("Hello World!") == 12);
    assert(length("Test") == 4);
    assert(length("") == 0);
}

void next_occurence_test()
{
    assert(next_occurence("Hello World", 0, 'o') == 4);
    assert(next_occurence("Hello World", 5, 'o') == 7);
    assert(next_occurence("Hello World", 0, 'p') == -1);
}

void number_of_occurences_test()
{
    assert(number_of_occurences("Hello World", 'o') == 2);
    assert(number_of_occurences("Hello World", 'W') == 1);
    assert(number_of_occurences("Hello World", 'p') == 0);
}

void substring_test()
{
    char *new_string = substring("Hello World", 1, 4);
    assert(strcmp(new_string, "ello") == 0);

    new_string = substring("Hello World", 0, 2);
    assert(strcmp(new_string, "Hel") == 0);
}

int main()
{
    // Running the tests:
    length_test();
    next_occurence_test();
    number_of_occurences_test();
    substring_test();
    // Priting the result of the tests:
    printf("All tests passed\n");
}
