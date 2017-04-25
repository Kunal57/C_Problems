#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int c;
  int i = 0;
  char input[5];

  printf("How much change in owed?\n");

  while((c = getchar()) != '\n')
  {
    input[i] = c;
    i++;
  }
  input[i] = '\0';

  int owed = atof(input) * 100;

  int quarters = 0;
  int dimes = 0;
  int nickles = 0;
  int pennies = 0;

  while(owed > 0)
  {
    if (owed >= 25)
    {
      quarters++;
      owed -= 25;
    }
    else if (owed >= 10)
    {
      dimes++;
      owed -= 10;
    }
    else if (owed >= 5)
    {
      nickles++;
      owed -= 5;
    }
    else
    {
      pennies++;
      owed -= 1;
    }
  }

  printf("Coins: %i", quarters + dimes + nickles + pennies);

}