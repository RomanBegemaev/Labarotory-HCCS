#include <stdio.h>
#include <stdlib.h> // for exit
int cache[500]; // cache program

unsigned long Fibbonachi(int number)
{
    if (cache[number] == 0)
    {
        if (number == 1 || number == 2)
        {
            cache[number] = 1;
        }
        else
        {
            cache[number] = Fibbonachi(number - 1) + Fibbonachi(number - 2);
        }
    }

    return cache[number];
}

int main()
{
    int n;
    printf("Какое число фиббоначи нужно найти: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("error");
        exit(0);
    }
    n++; // n++ becouse count = 1, if count = 0 program failed 
    for (int count = 1; count < n; count++)
    {
        printf("%lu\t", Fibbonachi(count));
    }
    return 0;
}
