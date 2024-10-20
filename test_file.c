#include <stdio.h>
#include <math.h>

#include "taylor_sine.h"

// Ansi function test function:
void ansi_test(double x)
{
    // Printing the result using sin function included in math.h:
    printf("ANSI sin function result: %f\n", sin(x));
}

// Our taylor_sine test function:
void taylor_sine_test(double x, int n)
{
    // Saving the result:
    double result = taylor_sine(x, n);
    // Priting the result:
    printf("The taylor_sine function result is %f\n", result);
}

int main()
{
    // Interval with very low x-values gave similar results. Increasing rapidly drops the accuracy.
    // Increasing the precision had a huge effect until we reached around n>10 then the program couldn’t handle the calculations.

    // Variables:
    double x = 0.5;
    int n = 100;

    // Printing the values:
    printf("The x value is: %f\n", x);
    printf("The n value is: %d\n", n);

    // Caling the test functions:
    ansi_test(x);
    taylor_sine_test(x, n);

    return 0;
}
