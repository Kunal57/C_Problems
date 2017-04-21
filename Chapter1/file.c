#include <stdio.h>

// Copy File
// int main(void)
// {
//   int c;

//   while((c = getchar()) != EOF)
//   {
//     putchar(c);
//   }
// }

// Character Count
// int main(void)
// {
//   for(int c = 0; getchar() != EOF; c++)
//   {
//     printf("%i\n", c);
//   }
// }

// Line Count
// int main(void)
// {
//   int c, nl;

//   nl = 0;
//   while((c = getchar()) != EOF)
//   {
//     if (c == '\n')
//     {
//       nl++;
//     }
//     printf("%i\n", nl);
//   }
// }

// Word Count
#define IN 1
#define OUT 0

int main(void)
{
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;

  while((c = getchar()) != EOF)
  {
    nc++;
    if (c == '\n')
    {
      nl++;
    }
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }
    else if (state == OUT)
    {
      state = IN;
      nw++;
    }
    printf("%i %i %i\n", nl, nw, nc);
  }
}