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
    int a=2, b=10;
    //scanf("%d%d", &a, &b);
    printf("%d", power(a, b));
    return 0;
}
