#include <stdio.h>

int greatest (int a, int b)
{
    int i, result;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("i %d\n", i);
            result = i;
            printf("res %d\n", result);
        }
    }
    
    return result;
}

int main (void)
{
    printf("%d\n", greatest(10, 20));
    return 0;
}

