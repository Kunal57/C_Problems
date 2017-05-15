#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int hourglass(int *array);

int main(){
  int arr[6][6];
  int max = 0;
  int sum = 0;
  int n = 0;
  int i = 0;
  int j = 0;


  for(int row = 0; row < 6; row++){
    for(int column = 0; column < 6; column++){
      scanf("%d", &arr[row][column]);
    }
  }

  while(n < 16)
  {
    for(int row = i; row < i + 3; row++){
      for(int column = j; column < j + 3; column++){
        if(row == i + 1)
        {
          sum += arr[i + 1][j + 1];
          break;
        }

        sum += arr[row][column];
      }
    }

    if(j + 3 < 6)
    {
      j++;
    }
    else
    {
      j = 0;
      i++;
    }

    if(sum > max || n == 0)
    {
      max = sum;
      sum = 0;
    }
    else
    {
      sum = 0;
    }
    n++;
  }

  printf("%i\n", max);
  return max;
}
