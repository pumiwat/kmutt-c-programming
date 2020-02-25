#include <stdio.h>
#include <math.h>

int main () {
  double a, b;
  double x, result;
  scanf("%lf%lf", &a, &b);
  x = a*a+b*b;
  result = sqrt(x);
  printf("%lf\n", result);
  return 0;
}