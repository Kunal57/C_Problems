#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main(void)
{

  char s1[6] = {'a', 'e', 'i', 'o', 'u', '\0'};
  int c, i;
  char s2[1000];

  while ((c = getchar()) != '\n')
  {
    s2[i++] = c;
  }

  squeeze(s1, s2);

  printf("%s\n", s1);

}

void squeeze(char s1[], char s2[])
{
  for (int i = 0; s1[i] != '\0'; i++)
  {
    for (int x = 0; s2[x] != '\0'; x++)
    {
      if (s1[i] == s2[x])
      {
        s1[i] = ' ';
      }
    }
  }
}