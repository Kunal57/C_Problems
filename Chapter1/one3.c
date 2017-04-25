#include <stdio.h>

// Exercise 1-5
int main(void)
{
  int fahrenheit;

  for(fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 20)
  {
    printf("%6i\t%6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit - 32.0));
  }
}