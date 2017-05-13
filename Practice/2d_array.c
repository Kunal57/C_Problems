#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  int arr[6][6];
  int max = 0;
  int sum = 0;
  int n = 0;

  for(int arr_i = 0; arr_i < 6; arr_i++){
    for(int arr_j = 0; arr_j < 6; arr_j++){
      scanf("%d",&arr[arr_i][arr_j]);
    }
  }

  for(int arr_i = 2, mid = arr_i + 1; arr_i < 5; arr_i++){
    for(int arr_j = 0; arr_j < 3; arr_j++){
      if(arr_i == mid)
      {
        sum += arr[mid][arr_j + 1];
        break;
      }
      else
      {
        sum += arr[arr_i][arr_j];
        max = (sum > max) ? sum : max;
      }
    }
  }

  printf("%i\n", max);
  return max;
}
