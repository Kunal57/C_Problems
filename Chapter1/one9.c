#include <stdio.h>

// Exercise 1-16
// #define MAXLINE 1000

// int getlines(int spot, char s[], int lim);
// void copy(char to[], char from[]);

// int main(void)
// {
//   int len;
//   int max;
//   int spot;
//   char line[MAXLINE];
//   char longest[MAXLINE];

//   max = 0;
//   while((len = getlines(spot, line, MAXLINE)) > 0)
//   {
//     spot += len;
//     if (len > max)
//     {
//       max = len;
//       copy(longest, line);
//     }
//   }

//   line[spot + 1] = '\0';


//   if (max > 0)
//   {
//     printf("%i\n", max);
//     for (int i = 0; i < spot; i++)
//     {
//       printf("%c", line[i]);
//     }
//   }

//   return 0;
// }

// int getlines(int spot, char s[], int lim)
// {
//   int c, i, l;
//   l = 0;

//   for (i = spot; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
//   {
//     s[i] = c;
//     l++;
//   }
//   if (c == '\n')
//   {
//     s[i] = c;
//     l++;
//   }

//   return l;
// }

// void copy(char to[], char from[])
// {
//   int i;

//   i = 0;
//   while((to[i] = from[i]) != '\0')
//   {
//     i++;
//   }
// }

// Exercise 1-17
// #define MAXLINE 1000

// int getlines(int max, char line[]);

// int main(void)
// {

//   int len;
//   char line[MAXLINE];

//   while((len = getlines(MAXLINE, line)) > 0)
//   {
//     if (len > 80)
//     {
//       printf("%i\nLine: ", len);
//       for (int i = 0; i < len; i++)
//       {
//         printf("%c", line[i]);
//       }
//       printf("\n");
//     }
//   }

//   return 0;
// }

// int getlines(int max, char line[])
// {
//   int c, l;

//   while ((c = getchar()) != EOF && c != '\n')
//   {
//     line[l] = c;
//     l++;
//   }
//   return l;
// }

// Exercise 1-18
// #define MAXLINE 1000

// int main(void)
// {
//   int c;
//   int l = 0;
//   char line[MAXLINE];

//   while((c = getchar()) != EOF)
//   {
//     if (c == '\n')
//     {
//       if (line[l - 1] == '\n' || line[l - 1] == '\t' || line[l - 1] == ' ')
//       {
//         line[l - 1] = c;
//       }
//     }
//     else
//     {
//       line[l] = c;
//       l++;
//     }
//   }

//   printf("\nLength: %i\n", l);

//   for (int i = 0; i < l; i++)
//   {
//     printf("%c", line[i]);
//   }

// }

// Exercise 1-19
#define MAXLINE 1000

void reverse(int beginning, int ending, char line[]);

int main(void)
{

  int c;
  int l = 0;
  int b = 0;
  char line[MAXLINE];

  while((c = getchar()) != EOF)
  {
    line[l] = c;
    l++;

    if (c == '\n')
    {
      reverse(b, l - 2, line);
      b = l;
    }
  }

  printf("%s\n", line);
}

void reverse(int beginning, int ending, char line[])
{
  int end = (ending - beginning) / 2;
  for (int i = 0; i <= end; i++)
  {
    int temp = line[beginning + i];
    line[beginning + i] = line[ending - i];
    line[ending - i] = temp;
  }
}