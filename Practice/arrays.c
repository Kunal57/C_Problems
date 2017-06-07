#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define MAX 1000

int main(void)
{
  int c, n, i, x;
  i = x = 0;
  char string[MAX];
  int numbers[MAX];

  while((c = getchar()) != '\n')
  {
    string[i++] = c;
  }
  string[i] = '\0';

  n = atoi(string);
  i = 0;

  while((c = getchar()))
  {
    if(c == ' ' || c == '\n' || c == EOF)
    {
      string[i] = '\0';
      numbers[x++] = atoi(string);
      i = 0;
      if (c == EOF)
      {
        break;
      }
    }
    else
    {
      string[i++] = c;
    }
  }

  while(n > 0)
  {
    printf("%i ", numbers[--n]);
  }

  return 0;
}
