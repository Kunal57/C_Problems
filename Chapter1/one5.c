#include <stdio.h>

// Exercise 1-6
// EOF can be simulated by pressing Control + D
// int main(void)
// {
//   int c;
//   printf("%i\n", (c = getchar()) != EOF);
// }

// Exercise 1-7
// int main(void)
// {
//   printf("%i\n", EOF);
// }

// Exercise 1-8
// int main(void)
// {
//   int blanks = 0;
//   int tabs = 0;
//   int newlines = 0;
//   int c;

//   while((c = getchar()) != EOF)
//   {
//     if (c == '\t')
//     {
//       tabs++;
//     }
//     else if (c == ' ')
//     {
//       blanks++;
//     }
//     else if (c == '\n')
//     {
//       newlines++;
//     }
//   }

//   printf("Blanks: %i\nTabs: %i\nNewLines: %i\n", blanks, tabs, newlines);
// }

// Exercise 1-9
// int main(void)
// {
//   int blank = 0;
//   int c;

//   while((c = getchar()) != EOF)
//   {
//     if (c != ' ')
//     {
//       blank = 0;
//       putchar(c);
//     }
//     else if (c == ' ' && blank == 0)
//     {
//       blank = 1;
//       putchar(c);
//     }
//   }

//   return 0;
// }

// Exercise 1-10
// int main(void)
// {
//   int c;

//   while((c = getchar()) != EOF)
//   {
//     if (c == '\t')
//     {
//       printf("\\t");
//     }
//     else if (c == '\b')
//     {
//       printf("\\b");
//     }
//     else if (c == '\\')
//       printf("\\");
//     else
//     {
//       putchar(c);
//     }
//   }

//   return 0;
// }

// Exercise 1-11
// #define IN 1
// #define OUT 0

// int main(void)
// {
//   int lines, words, characters;
//   lines = words = characters = 0;
//   int state = OUT;
//   int c;

//   while ((c = getchar()) != EOF)
//   {
//     if (c != '\n' && c != '\t' && c != ' ' && state == OUT)
//     {
//       state = IN;
//       words++;
//       characters++;
//     }
//     else if (c == '\n' || c == '\t' || c == ' ')
//     {
//       state = OUT;
//       if (c == '\n')
//       {
//         lines++;
//       }
//     }
//     else
//     {
//       characters++;
//     }
//   }
//   printf("Lines: %i, Words: %i, Characters: %i\n", lines, words, characters);
// }

// Exercise 1-12
int main(void)
{
  int c;
  while((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\t' || c == '\n')
    {
      putchar('\n');
    }
    else
    {
      putchar(c);
    }
  }
}