#include <stdio.h>

// External Variables Example

#define MAXLINE 1000

int getop(void);
void push(int n);
float pop(void);

int main(void)
{
  int c, i, temp;
  char s[MAXLINE];

  while((c = getchar()) != EOF)
  {
    if (c >= '0' && c <= '9')
    {
      push(c - '0');
    }
    else if (c == '+')
    {
      push(pop() + pop());
    }
    else if (c == '-')
    {
      temp = pop();
      push(pop() - temp);
    }
    else if (c == '*')
    {
      push(pop() * pop());
    }
    else if (c == '/')
    {
      temp = pop();
      push(pop() / temp);
    }
    else if (c == '\n')
      printf("%.2f\n", pop());
  }
}

float string[MAXLINE];
int position = 0;

void push(int n)
{
  string[position++] = n;
}

float pop(void)
{
  if (position > 0)
  {
    return string[--position];
  }
  return -1;
}
