#include <stdio.h>
#include <stdlib.h> // for exit
long long get_fibbonachi_via_cycle(int);
 int main()
{
  int n;
  printf ("Какое число фиббоначи нужно найти: ");
  scanf ("%d",&n);
    printf("%llu\t",get_fibbonachi_via_cycle(n+1));
}

long long get_fibbonachi_via_cycle(int number)
{
  long fib1 = 1;
  long fib_sum=1;
  for (int i = 0; i < number - 2; i++)
  {
    fib1 += fib_sum;
    fib_sum = fib1 - fib_sum;
  }

  return fib_sum;
}
