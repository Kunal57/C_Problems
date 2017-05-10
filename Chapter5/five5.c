#include <stdio.h>

// Exercise 5-3
#define MAX 1000

void getsline(char *string);
void strcatt(char *s1, char *s2);

int main(void)
{
  char s1[MAX], s2[MAX];

  getsline(s1);
  getsline(s2);

  strcatt(s1, s2);

  printf("%s\n", s1);
}

void getsline(char *string)
{
  int c;
  while((c = getchar()) != '\n')
  {
    *string++ = c;
  }
  *string = '\0';
}

void strcatt(char *s1, char *s2)
{
  while(*s1++ != '\0')
  {
    if(*s1 == '\0')
    {
      while(*s2 != '\0')
      {
        *s1++ = *s2++;
      }
      *s1 = '\0';
    }
  }
}