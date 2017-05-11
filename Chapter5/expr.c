#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Exercise 5-11
#define MAX 1000

int pop(void);
void push(int n);

int main(int argc, char *argv[])
{
  while (--argc > 0 && argv++ != NULL)
  {
    printf("%s\n", *argv);
    if(*argv[0] == '+')
    {
      push(pop() + pop());
    }
    else if(*argv[0] == '-')
    {
      int x = pop();
      push(pop() - x);
    }
    // else if(*argv[0] == '*')
    // {
    //   int x = pop();
    //   push(pop() * x);
    // }
    else if(*argv[0] == '/')
    {
      int x = pop();
      push(pop() / x);
    }
    else
    {
      push(atoi(*argv));
    }
  }

  printf("%i\n", pop());
  return 0;
}

// Push & Pop Functions
static int stack[MAX];
int *sp = stack;

int pop(void)
{
  return *--sp;
}

void push(int n)
{
  *sp++ = n;
}