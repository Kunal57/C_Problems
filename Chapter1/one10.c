#include <stdio.h>

// Exercise 1-22
#define MAXLINE 1000
#define LINELENGTH 50

int main(void)
{
  int c;
  int space = 0;
  int l = 0;
  int ll = 0;
  char line[MAXLINE];

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || ll < LINELENGTH)
    {
      space = l;
    }
    else if (ll > LINELENGTH)
    {
      ll = 0;
      line[space] = '\n';
    }
    line[l] = c;
    ll ++;
    l++;
  }
  printf("%s\n", line);
}