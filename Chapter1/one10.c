#include <stdio.h>

// Exercise 1-22
// #define MAXLINE 1000
// #define LINELENGTH 50

// int main(void)
// {
//   int c;
//   int space = 0;
//   int l = 0;
//   int ll = 0;
//   char line[MAXLINE];

//   while ((c = getchar()) != EOF)
//   {
//     if (c == ' ' || ll < LINELENGTH)
//     {
//       space = l;
//     }
//     else if (ll > LINELENGTH)
//     {
//       ll = 0;
//       line[space] = '\n';
//     }
//     line[l] = c;
//     ll ++;
//     l++;
//   }
//   printf("%s\n", line);
// }

// Exercise 1-23
#define MAXLINE 1000

int main(void)
{
  int c;
  int i = 0;
  int slash = 0;
  char line[MAXLINE];

  while ((c = getchar()) != EOF)
  {
    if (c == '/' && slash == 1)
    {
      i--;
      while ((c = getchar()) != '\n')
      {
        i = i;
      }
      slash = 0;
    }
    else if (c == '/' && slash == 0)
    {
      slash = 1;
      line[i] = c;
      i++;
    }
    else if (c == '\n' && line[i - 1] == '\n')
    {
      i = i;
    }
    else
    {
      slash = 0;
      line[i] = c;
      i++;
    }
  }

  printf("\n__________String__________\n%s\n", line);
}