#include <stdio.h>

int power(int m, int n);

int main(void)
{
  for(int i = 0; i < 10; i++)
  {
    printf("%i %i %i\n", i, power(2, i), power(-3,i));
  }
}

int power(int base, int n)
{
  int i, p;

  p = 1;
  for (i = 1; i <= n; i++)
  {
    p = p * base;
  }
  return p;
}