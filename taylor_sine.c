#include <stdio.h>
#include "taylor_sine.h"

// Function to calculate the power of:
double power(double x, int n)
{
  // Setting the result to 1 by standard:
  long result = 1;

  // Looping through n times:
  for (int i = 0; i < n; i++)
  {
    // Multiplying current result with x:
    result *= x;
  }
  // Returning the result:
  return result;
}

// Function to calculate factorial:
long long fact(int n)
{
  // Setting the result to 1 by standard:
  long long result = 1;

  // Looping through n times:
  for (int i = 1; i <= n; i++)
  {
    // Multiplying current result with i:
    result *= i;
  }
  // Returning the result:
  return result;
}

// Function to calculate the sine:
double taylor_sine(double x, int n)
{
  // Calculated result variable:
  double result = 0.0;
  // Variable to track each calculation in the loop until reached n:
  double current;
  // Variable to make it possible to switch between negative and positive operator:
  int sign = 1;

  // Looping through n times:
  for (int i = 0; i < n; i++)
  {
    // Making sure that the exponent is only odd numbers. (Like it is the sine series)
    int exponent = 2 * i + 1;
    // Calculating each term in the series up until n using the functions:
    current = sign * power(x, exponent) / fact(exponent);
    // Incrementing the result:
    result += current;
    // Switching between + and -:
    sign = -sign;
  }
  // Returning the result:
  return result;
}

int main()
{
  double x = 4.0;
  int n = 20;
  double sine_approx = taylor_sine(x, n);
  printf("Approximate sine (%f) using Taylor series: %f\n", x, sine_approx);
  printf("Test");
}