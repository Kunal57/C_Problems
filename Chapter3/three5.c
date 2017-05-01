#include <stdio.h>

void expand(char s1[], char s2[]);

int main(void)
{
  int i, c;
  char s1[20], s2[1000];

  while ((c = getchar()) != '\n')
  {
    s1[i++] = c;
  }
  s1[i] = '\0';

  expand(s1, s2);

  printf("%s\n", s2);

  return 0;
}


void expand(char s1[], char s2[])
{
  int i, x;
  i = x = 0;
  int z = 1;

  while (s1[i] != '\0')
  {
    if (s1[i] == '-')
    {
      while(s2[x] != s1[i + 1])
      {
        s2[++x] = s1[i - 1] + z;
        z++;
      }
      z = 0;
      i++;
    }
    else
    {
      s2[x] = s1[i++];
    }
  }
}