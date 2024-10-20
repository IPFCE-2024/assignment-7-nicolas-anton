#include <stdio.h>
#include "taylor_sine.h"

// Function to calculate the power of:
double power(double x, int n)
{
  // Setting the result to 1 by standard:
  double result = 1.0;

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
  // sum variable:
  double sum = 0.0;

  // Looping through n times:
  for (int i = 0; i < n; i++)
  {
    // Making sure that the exponent is only odd numbers. (Like it is the sine series)
    int exponent = (2 * i + 1);
    // Checking if equal:
    if (i % 2 == 0)
    {
      // Positive term of sine function calculation:
      sum += power(x, exponent) / fact(exponent);
    }
    else
    {
      // Negative term of sine function calculation:
      sum -= power(x, exponent) / fact(exponent);
    }
  }
  // Returning the result:
  return sum;
}