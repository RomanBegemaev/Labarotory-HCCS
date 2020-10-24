#include <stdio.h>
#include <stdlib.h>
int is_simple(int number)
{
  int num=0;
  if (number < 2)
  {
    printf("Число 1 не является простым и составным, введите другое число ");
    exit(0);
  }
  if ((number==0) || (number==1))
  {
    return 0;
  }
  else
  {
    for (int i=2;i<=number;i++)
    {
      if (number%i==0)
      {
        num++;
      }
    }
    if (num>1)
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
}
int main ()
{
  int number;
  scanf ("%d",&number);
  printf ("%d",is_simple(number)); 
  return 0;
}
