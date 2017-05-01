#include <stdio.h>

void escape(char s[], char t[]);

int main(void)
{
  int c, i;
  char s[1000], t[1000];

  while ((c = getchar()) != EOF)
  {
    s[i++] = c;
  }

  escape(s, t);

  printf("%s\n", t);
}

void escape(char s[], char t[])
{
  for (int i = 0, x = 0; s[i] != '\0'; i++, x++)
  {
    switch (s[i])
    {
      case '\n':
        t[x++] = '\\';
        t[x] = 'n';
        break;
      case '\t':
        t[x++] = '\\';
        t[x] = 't';
        break;
      default:
        t[x] = s[i];
        break;
    }
  }
}

