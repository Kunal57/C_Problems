#include <stdio.h>

// Exercise 1-15
int tempConverter(int fahrenheit);

int main(void)
{
  float fahrenheit, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Celsius - Fahrenheit Table\n\n");

  while (fahrenheit <= upper)
  {
    celsius = tempConverter(fahrenheit);
    printf("%6.1f\t%8.0f\n", celsius, fahrenheit);
    fahrenheit += step;
  }
}

int tempConverter(int fahrenheit)
{
  return (5.0/9.0) * (fahrenheit - 32.0);
}