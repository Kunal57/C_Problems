#include <stdio.h>

#define MAXLINE 1000

int main(void)
{
  int c;
  char line[MAXLINE];

  for (int i = 0; i < MAXLINE - 1; i++)
  {
    if ((c = getchar()) != '\n')
    {
      if (c != EOF)
      {
        line[i] = c;
      }
    }
  }
  printf("%s\n", line);
}