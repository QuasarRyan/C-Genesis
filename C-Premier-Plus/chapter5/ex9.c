#include <stdio.h>
#include <stdlib.h>
long double Temperature(double t);
int main (void)
{
  printf("Type in temperature in Fahrenheit: ");
  double temp = 0.;
  while (scanf("%lf", &temp) == 1)
  {
    printf("%-.2lf°F %-.2Lf°C %-.2LfK\n", temp, Temperature(temp), Temperature(temp) - 273.16);
    printf("Type in temperature in Fahrenheit (Type q to quit): ");
  }
  return EXIT_SUCCESS;
}
long double Temperature(double t)
{
  return (long double)(5.0/9.0*(t - 32.0));
}
