#include <stdio.h>

/* print only even numbers*/

int even(int a)
{
    int reminder; 

    for (int i = 0; i <= a; i++)
    {
        if (a%2 != 0)
        {
            printf("is even ");
            return a;
        }
        else
            continue;
    
    }
    return a;
}

int main()
{
    printf("%d\n", even(5));
    printf("%d\n", even(8));
    printf("%d\n", even(18));
    printf("%d\n", even(21));
    return 0;
}