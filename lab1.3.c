#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int get_power(int number, int power)
{
    if (number==0)
        return 1;
    else if (number==1)
        return power;
    else if (number % 2 == 0 )
        return pow( power * power, number/2);
    else
        return pow( power * power, number /2)*power;
}
int main(void)
{
    int power=3, number=5;
    //scanf("%d%d", &power, &number);
    printf("%d", get_power(power, number));
    return 0;
}