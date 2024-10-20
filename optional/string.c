#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "string.h"

// Calculating the length:
int length(const char *s)
{
    // Length variable:
    int len = 0;

    // Calculating the length:
    while (s[len] != '\0')
    {
        len++;
    }
    // Returning the length:
    return len;
}

// Checking the next occurence of a letter in a string from a given index n.
int next_occurence(const char *s, int n, char c)
{
    // Looping from n to the end of the string:
    for (int i = n; s[i] != '\0'; i++)
    {
        // Checking if the character in current index matches the character c:
        if (s[i] == c)
        {
            // Returning the index:
            return i;
        }
    }
    // Returning -1 if not found:
    return -1;
}

// Checking the number of occurences of a character in the string:
int number_of_occurences(const char *s, char c)
{
    // Setting a counter to 0:
    int counter = 0;

    // Looping through until the end of the string:
    for (int i = 0; s[i] != '\0'; i++)
    {
        // Chcecking if the character in current index matches the character c:
        if (s[i] == c)
        {
            // Incrementing the counter:
            counter++;
        }
    }
    // Returning the counter:
    return counter;
}

char *substring(const char *s, int i1, int i2)
{
    // Checking if the start and end values are valid for a new string:
    assert(i1 >= 0 && i1 < i2);

    // Calculating the length of the new string making sure to include all letters:
    int len = i2 - i1 + 1;

    // Allocating memory for the new string:
    char *sub = (char *)malloc((len + 1) * sizeof(char));

    // Looping from start index to end index:
    for (int j = 0; j < len; j++)
    {
        // Putting the characters into substring:
        sub[j] = s[i1 + j];
    }

    // Adding \0 at the end substring:
    sub[len] = '\0';

    // Returning the substring:
    return sub;
}