#include <stdio.h>

// Exercise 5-8
int day_of_year(int month, int day, int year);
int leap_year(int year);
void month_day(int year, int yearday, int *m, int *d);

static char daytab[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31}, {0,31,29,31,30,31,30,31,31,30,31,30,31}};

int main(void)
{
  int month = 5;
  int day = 10;
  int year = 2017;

  printf("%i\n", day_of_year(month, day, year));

  int m, d;
  int yearday = 130;

  month_day(year, yearday, &m, &d);

  printf("Month: %i Day: %i\n", m, d);
}

int day_of_year(int month, int day, int year)
{
  int leap;

  leap = leap_year(year);

  for(int i = 0; i < month; i++)
  {
    day += daytab[leap][i];
  }
  return day;
}

int leap_year(int year)
{
  if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
  {
    return 1;
  }
  return 0;
}

void month_day(int year, int yearday, int *m, int *d)
{
  int leap, month, i;

  leap = leap_year(year);

  for(i = 0; yearday > daytab[leap][i]; i++)
  {
    yearday -= daytab[leap][i];
  }
  *m = i;
  *d = yearday;
}