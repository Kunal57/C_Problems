#include <stdio.h>

// Exercise 1-13
// int main(void)
// {
//   int words[10];
//   for (int i = 0; i < 10; i++)
//   {
//     words[i] = 0;
//   }

//   int c;
//   int count = 0;
//   int word = 0;
//   while((c = getchar()) != EOF)
//   {
//     if (c == '\n' || c == '\t' || c == ' ')
//     {
//       words[word] = count;
//       word++;
//       count = 0;
//     }
//     else
//     {
//       count++;
//     }
//   }

//   for (int i = 0; i < 10; i++)
//   {
//     for (int k = 0; k < words[i]; k++)
//     {
//         putchar('*');
//     }
//     putchar('\n');
//   }
// }

// Exercise 1-14
int main(void)
{
  int alphabet[26];
  for (int i = 0; i < 26; i++)
  {
    alphabet[i] = 0;
  }

  int c;
  while((c = getchar()) != EOF)
  {
    if ((c - 'a') >= 'a' || (c - 'a') <= 'z')
    {
      alphabet[c - 'a'] += 1;
    }
  }

  for (int i = 0; i < 26; i++)
  {
    printf("%c: ", 'a' + i);
    for (int k = 0; k < alphabet[i]; k++)
    {
        printf("*");
    }
    printf("\n");
  }
}