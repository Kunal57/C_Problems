#include <stdio.h>

void lower(char s[]);

int main(void)
{
  int c, i;
  char s[1000];

  while ((c = getchar()) != '\n')
  {
    s[i++] = c;
  }
  s[i] = '\0';

  lower(s);

  printf("%s\n", s);
}

void lower(char s[])
{
  for (int i = 0; s[i] != '\0'; i++)
  {
    s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] + 32 : s[i];
  }
}