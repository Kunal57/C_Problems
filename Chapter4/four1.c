#include <stdio.h>

int strrindex(char characters[], char string[]);

int main(void)
{

  char characters[] = "kunal";
  char string[] = "hello my name is kunal. kunal is spelt kunal.";

  int value = strrindex(characters, string);
  printf("%i\n", value);
  return value;

}

int strrindex(char characters[], char string[])
{
  int n = 0;

  for (int i = 0; string[i] != '\0'; i++)
  {
    if (string[i] == characters[0])
    {
      for (int x = 0; characters[x] != '\0'; x++)
      {
        if (characters[x + 1] == '\0')
        {
          if (n < i)
          {
            n = i;
          }
        }
      }
    }
  }

  return (n != 0) ? n : -1;
}