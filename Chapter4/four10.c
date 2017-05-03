#include <stdio.h>

// Exercise 4-13
void reverse(char s[], int begin, int end);

int main(void)
{
  char s[] = "This is a string!";

  reverse(s, 0, 16); // Not including '\0' character at the end of the string

  printf("%s\n", s);
}

void reverse(char s[], int begin, int end)
{
  int temp;
  if (begin < end)
  {
    temp = s[begin];
    s[begin] = s[end];
    s[end] = temp;
    reverse(s, begin + 1, end - 1);
  }
}