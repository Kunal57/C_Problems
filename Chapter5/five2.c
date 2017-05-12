#include <stdio.h>
#include <ctype.h>

// Exercise 5-1
 int getch(void);
void ungetch(int c);

#define SIZE 100

int main(void)
{
  int n, array[SIZE], getint(int *);

  for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
  {
    printf("Storing in n = %d, getint %d\n", n, array[n]);
  }

  printf("Storing in n = %d, getint %d\n", n, array[n]);

  for (int i = 0; array[i] != EOF; i++)
  {
    printf("%d\n", array[i]);
  }

  return 0;
}

int getint(int *pn)
{
  int c, sign;

  while (isspace(c = getch()))
  {
    ;
  }

  if (!isdigit(c) && c != EOF && c != '+' && c != '-')
  {
    ungetch(c);
    return 0;
  }

  sign = (c == '-') ? -1 : 1;
  if (c == '+' || c == '-')
  {
    c = getch();
  }
  for (*pn = 0; isdigit(c); c = getch())
  {
    *pn = 10 * *pn + (c - '0');
  }
  *pn *= sign;
  if (c != EOF)
  {
    ungetch(c);
  }
  return c;
}

char buf[SIZE];
int bufp = 0;

int getch(void) /* get a (possibly pushed back) character */
{
  if (bufp > 0)
  {
    return buf[--bufp];
  }
  else
  {
    return getchar();
  }
}

void ungetch(int c) /* push character back on input */
{
  if (bufp >= SIZE)
  {
    printf("ungetch: too many characters\n");
  }
  else
  {
    buf[bufp++] = c;
  }
}