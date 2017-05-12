#include <stdio.h>

// Exercise 5-3
// #define MAX 1000

// void getsline(char *string);
// void strcatt(char *s1, char *s2);

// int main(void)
// {
//   char s1[MAX], s2[MAX];

//   getsline(s1);
//   getsline(s2);

//   strcatt(s1, s2);

//   printf("%s\n", s1);
// }

// void getsline(char *string)
// {
//   int c;
//   while((c = getchar()) != '\n')
//   {
//     *string++ = c;
//   }
//   *string = '\0';
// }

// void strcatt(char *s1, char *s2)
// {
//   while(*s1++ != '\0')
//   {
//     if(*s1 == '\0')
//     {
//       while(*s2 != '\0')
//       {
//         *s1++ = *s2++;
//       }
//       *s1 = '\0';
//     }
//   }
// }

// Exercise 3-4
// #define MAX 1000

// int strlength(char *s);
// int strendd(char *s1, char *s2);

// int main(void)
// {
//   char s1[] = "This is a string";
//   char s2[] = "string";

//   printf("%i, %i\n", *s1, *s2);

//   printf("%i\n", strendd(s1, s2));
// }

// int strendd(char *s1, char *s2)
// {
//   while(*s1 != '\0')
//   {
//     s1++;
//   }
//   s1--;

//   while (*s2 != '\0')
//   {
//     s2++;
//   }
//   s2--;

//   for(int i = 0; i < strlength(s2); i++)
//   {
//     printf("%c, %c\n", *s1, *s2);
//     if(*s1-- != *s2--)
//     {
//       return 0;
//     }
//   }

//   return 1;
// }

// int strlength(char *s)
// {
//   int i = 0;
//   while (*s++ != '\0')
//   {
//     i++;
//     if (*s == '\0')
//     {
//       return i;
//     }
//   }
//   return 0;
// }

// Exercise 5-5
#define MAX 1000
void strncpyy(char *s, char *t, int n);

int main(void)
{
  char s1[] = "This is a string";
  char s2[MAX];
  int n = 10;

  strncpyy(s2, s1, n);

  printf("%s\n", s2);
}

void strncpyy(char *s, char *t, int n)
{
  for(int i = 0; i < n; i++)
  {
    *s++ = *t++;
  }
  *s = '\0';
}