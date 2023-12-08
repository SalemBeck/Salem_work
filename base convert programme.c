#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
  int from, to, number, i, decimal = 0, divrest, result, divresult;
  int numberCheck;
  bool baseCheck = true;
  printf("enter the base of the number (2,3,4,5,6,7,8,9 or 10) : ");
  scanf("%d", &from);
  if (from > 10 || from <= 1)
    printf("this base is not available or not valid ");
  else
  {
    printf("enter the number : ");
    scanf("%d", &number);
    numberCheck = number;
    while (baseCheck == true && numberCheck != 0)
    {
      divrest = numberCheck % 10;
      if (divrest >= from)
        baseCheck = false;
      numberCheck = numberCheck / 10;
    }
    if (baseCheck == false)
      printf("this number is not from base ( %d )", from);
    else
    {
      printf("enter the base you want to convert the number to : ");
      scanf("%d", &to);
      if ((to > 10 || to <= 1) && to != from)
        printf("this base is not available or not valid ");
      else if (to == from)
        printf("this number is already in base ( %d )", to);
      else
      {
        i = 0;
        while (number != 0)
        {
          divrest = number % 10;
          decimal = decimal + (divrest * pow(from, i));
          i++;
          number = number / 10;
        }
        if (to == 10)
          printf("%d", decimal);
        else
        {
          i = 0;
          while (decimal != 0)
          {
            divrest = decimal % to;
            result = result + (divrest * pow(10, i));
            decimal = decimal / to;
            i++;
          }
          printf("%d", result);
        }
      }
    }
  }
}