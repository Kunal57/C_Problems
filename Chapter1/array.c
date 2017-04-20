#include <stdio.h>

// Arrays
// int main(void)
// {
//   int c, i, nwhite, nother;
//   int ndigit[10];

//   nwhite = nother = 0;
//   for (i = 0; i < 10; i++)
//   {
//     ndigit[i] = 0;
//   }

//   while((c = getchar()) != EOF)
//   {
//     if (c >= '0' && c <= '9')
//     {
//       ndigit[c - '0']++;
//     }
//     else if (c == ' ' || c == '\n' || c == '\t')
//     {
//       nwhite++;
//     }
//     else
//     {
//       nother++;
//     }
//     printf("digits =");
//     for (i = 0; i < 10; i++)
//     {
//       printf(" %d\n", ndigit[i]);
//     }
//     printf(", whitespace = %i, other = %i\n", nwhite, nother);
//   }
// }

// Character Arrays
#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while((len = getlines(line, MAXLINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0)
  {
    printf("%s\n", longest);
  }
  return 0;
}

int getlines(char s[], int lim)
{
  int c, i;

  for (i=0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    s[i] = c;
    if (c == '\n')
    {
      s[i] = c;
      i++;
    }
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;

  i = 0;
  while((to[i] = from[i]) != '\0')
  {
    i++;
  }
}