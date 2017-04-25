#include <stdio.h>

// Exercise 1-3
// int main(void)
// {
//   float fahrenheit, celsius;
//   int lower, upper, step;

//   lower = 0;
//   upper = 300;
//   step = 20;

//   printf("Fahrenheit - Celsius Table\n\n");

//   fahrenheit = lower;
//   while (fahrenheit <= upper)
//   {
//     celsius = (5.0/9.0) * (fahrenheit - 32.0);
//     printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
//     fahrenheit += step;
//   }
// }

// Exercise 1-4
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
    celsius = (5.0/9.0) * (fahrenheit - 32.0);
    printf("%6.1f\t%8.0f\n", celsius, fahrenheit);
    fahrenheit += step;
  }
}