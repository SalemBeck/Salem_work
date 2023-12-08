
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
  int i, n, sum, t[10] = {};
  float var = 0, m, sd;
  printf("enter how many numbers to calculate their S.division : ");
  scanf("%d",&n);
  sum = 0;
  for (i = 0; i < n; i++)
  {
    printf("enter a number : ");
    scanf("%d", &t[i]);
    sum = sum + t[i];
  }
  sd = 0;
  m = sum / 10;
  for (i = 0; i < n; i++)
    var = var + (pow(t[i] - m, 2));

  sd = sqrt(var);
  printf("the standard devision is %f", sd);
}