#include <stdio.h>
#include <math.h>

// Exercise 3-5
void itob(int n, char s[], int b);
char hexa(int n);

int main(void)
{

  int b = 16;
  int n = 434324;
  char s[1000];

  itob(n, s, b);

  printf("%s\n", s);
}

void itob(int n, char s[], int b)
{
  int z = 0;

  for (int i = 5; i > 0; i--)
  {
    for (int k = 16; k > 0; k--)
    {
      double exp1 = k * pow(b, i);
      double exp2 = (k - 1) * pow(b, i);
      if (exp1 == 0 || exp2 == 0)
      {
        printf("%i, %i\n", i, k - 1);
        printf("%f, %f\n", exp1, exp2);
        if (z != 0)
        {
          s[z++] = hexa(0);
        }
        break;
      }
      else if (n < exp1 && n > exp2)
      {
        printf("%i, %i\n", i, k - 1);
        printf("%f, %f\n", exp1, exp2);
        s[z++] = hexa(k - 1);
        n = n - exp2;
        break;
      }
    }
  }

  if (n > 0)
  {
    s[z++] = hexa(n);
  }
  s[z++] = '\0';
}

char hexa(int n)
{
  switch (n)
  {
    case 0:
      return '0';
    case 1:
      return '1';
    case 2:
      return '2';
    case 3:
      return '3';
    case 4:
      return '4';
    case 5:
      return '5';
    case 6:
      return '6';
    case 7:
      return '7';
    case 8:
      return '8';
    case 9:
      return '9';
    case 10:
      return 'A';
    case 11:
      return 'B';
    case 12:
      return 'C';
    case 13:
      return 'D';
    case 14:
      return 'E';
    case 15:
      return 'F';
    default:
      return 'Z';
  }
}