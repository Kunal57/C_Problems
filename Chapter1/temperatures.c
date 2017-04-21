#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300
*/

// int main(void)
// {
//   float fahr, celsius;
//   int lower, upper, step;

//   lower = 0;    // lower limit of temperature table
//   upper = 300;   // upper limit
//   step = 20;    // step size

//   printf("Fahrenheit-Celsius Table\n\n");

//   fahr = lower;
//   while (fahr <= upper) {
//     celsius = (5.0/9.0) * (fahr-32.0);
//     printf("%3.0f %6.1f\n", fahr, celsius);
//     fahr = fahr + step;
//   }
// }

int main(void)
{
  for(int fahr = 0; fahr <= 300; fahr = fahr + 20)
  {
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
  }
}