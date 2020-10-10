#include <stdio.h>
int main()
{
    int n=5;
    //scanf("%d", &n);

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
