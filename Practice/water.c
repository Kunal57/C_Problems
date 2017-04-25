#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int c;
  int i = 0;
  char input[3];

  printf("Minutes: ");

  while((c = getchar()) != '\n')
  {
    input[i] = c;
    i++;
  }
  input[i] = '\0';

  printf("%s\n", input);
  int bottles = atoi(input) * 12;
  printf("Bottles: %i", bottles);
}