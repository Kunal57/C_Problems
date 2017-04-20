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
int main(void)
{
  int c, nl;

  nl = 0;
  while((c = getchar()) != EOF)
  {
    if (c == '\n')
    {
      nl++;
    }
    printf("%i\n", nl);
  }
}
