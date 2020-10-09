// 1 задача
#include <stdio.h>
int main()
{
    for (int i = 1; i < 100; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FizzBuzz\n");
            i++;
        }
        if (i % 5 == 0)
        {
            printf("Buzz\n");
            i++;
        }
        if (i % 3 == 0)
        {
            printf("Fizz\n");
            i++;
        }
        printf("%d\n", i);
    }
}
// 2 задача
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}

// 3 задача
#include <stdio.h>
#include <stdlib.h>

int power(int number, int power)
{
    int end_number = number;
    if (power == 0)
    {
        printf("1");
        exit(0);
    }
    else
    {
        for (int i = 1; power > i; i++)
        {
            end_number *= number;
        }
        return end_number;
    }
    printf("%d", end_number);
    return 0;
}
int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", power(a, b));
    return 0;
}
