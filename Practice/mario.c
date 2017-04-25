#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char input[3];


  while (atoi(input) > 23 || atoi(input) < 1)
  {
    int c;
    int i = 0;
    printf("Height: ");
    while ((c = getchar()) != '\n')
    {
      input[i] = c;
      i++;
    }
  }

  int height = atoi(input);

  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < height - 1 - i; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 2 + i; k++)
    {
      printf("#");
    }
    printf("\n");
  }
}