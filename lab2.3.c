#include <stdio.h>
#include <stdlib.h>

char* allsim = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // input 36 symbol

int toint(char d)
{
    for (int i = 0; i < 36; i++)
    {
        if (allsim[i] == d)
            return i;
    }
}

char* power(char* number, int source, int target)
{
    int j = 0, l = 0, p = 0, k = 10;
    char* buf;
    l = strlen(number); //strlen - how many characters are in a line
    for (int i = 0; i < l; i++)
    {
        p = p * source + toint(number[i]);
    }
    buf = (char*)calloc(100, 1); //  allocate memory for a dynamic array of integers
    while (1)
    {
        j = p % target;
        buf[k--] = allsim[j];
        l++;
        p /= target;
        if (p == 0)
        {
            break; // stop function
        }
    }
    j = 0;
    k++;
    while (1)
    {
        buf[j++] = buf[k++];
        if (k == 100)
        {
            break; // stop function
        }
    }
    buf = (char*)realloc(buf, (l + 1)); // when adding a new number, we increase the array by 1
    return buf;
}

int main()
{
    char* P = "200"; // number 
    char* Q;

    Q = power(P, 11, 32); //number,source,target
    printf("%s \n", Q);

    return 0;
}