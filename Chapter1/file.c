#include <stdio.h>

// int main(void)
// {
//   int c;

//   while((c = getchar()) != EOF)
//   {
//     putchar(c);
//   }
// }

int main(void)
{
  for(int c = 0; getchar() != EOF; c++)
  {
    printf("%i\n", c);
  }
}