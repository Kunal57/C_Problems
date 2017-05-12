#include <stdio.h>

// Exercise 4-13
// void reverse(char s[], int begin, int end);

// int main(void)
// {
//   char s[] = "This is a string!";

//   reverse(s, 0, 16); // Not including '\0' character at the end of the string

//   printf("%s\n", s);
// }

// void reverse(char s[], int begin, int end)
// {
//   int temp;
//   if (begin < end)
//   {
//     temp = s[begin];
//     s[begin] = s[end];
//     s[end] = temp;
//     reverse(s, begin + 1, end - 1);
//   }
// }

// Exercise 4-12
void printd(int n);
void itoa(int n, char s[]);

int main(void)
{
  int n = -1234;
  char s[1000];

  itoa(n, s);

  printf("%s\n", s);
}

void itoa(int n, char s[])
{
  static int position = 0;

  if (n < 0)
  {
    s[position++] = '-';
    n = -n;
  }

  if (n / 10)
  {
    itoa(n / 10, s);
  }
  n = n % 10;
  s[position++] = n + '0';
  s[position] = '\0';
}
