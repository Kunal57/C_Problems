#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(void)
{
  int x = 17;
  int v[10] = {2, 4, 6, 8, 9, 12, 15, 16, 17, 19};
  int n = 10;

  printf("%i\n", binsearch(x, v, n));

  return 0;
}

int binsearch(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;
  mid = (low + high) / 2;

  while (low <= high && v[mid] != x)
  {
    if (v[mid] < x)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }

    mid = (low + high) / 2;
  }

  if (v[mid] == x)
  {
    return 0;
  }
  else
  {
    return -1;
  }
}