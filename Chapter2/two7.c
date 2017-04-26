#include <stdio.h>
#include <math.h>

#define MAXLINE 12

int main(void)
{
  int c;
  int i;
  char line[MAXLINE];

  while ((c = getchar()) != '\n')
  {
    line[i] = c;
    i++;
  }
  line[i] = '\0';

  int sum;
  int x;
  int position;

  if (line[1] == 'x' || line[1] == 'X')
  {
    x = 2;
  }

  for (int k = i - 1; k >= x; k--)
  {
    int value = line[k];
    if (value >= '0' && value <= '9')
    {
      value = value - '0';
      sum += value * pow(16, position);
      position++;
    }
    else if (value == 'A' || value == 'a')
    {
      value = 10;
      sum += value * pow(16, position);
      position++;
    }
    else if (value == 'B' || value == 'b')
    {
      value = 11;
      sum += value * pow(16, position);
      position++;
    }
    else if (value == 'C' || value == 'c')
    {
      value = 12;
      sum += value * pow(16, position);
      position++;
    }
    else if (value == 'D' || value == 'd')
    {
      value = 13;
      sum += value * pow(16, position);
      position++;
    }
    else if (value == 'E' || value == 'e')
    {
      value = 14;
      sum += value * pow(16, position);
      position++;
    }
    else if (value == 'F' || value == 'f')
    {
      value = 15;
      sum += value * pow(16, position);
      position++;
    }
  }

  printf("%i\n", sum);

}