#include <stdio.h>
#include <stdlib.h> // for exit
int main()
{
    unsigned long fib1 = 1, fib2 = 1, fib_sum, n, i = 0;
    printf("Номер элемента ряда Фибоначчи: ");
    scanf("%lu", &n);
    if (n == 1)
    {
        printf("1");
        exit(0);
    }
    if (n <= 0)
    {
        printf("error");
        exit(0);
    }
    while (i < n - 2)
    {
        fib_sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_sum;
        i++;
    }
    printf("%lu", fib2);
    return 0;
}