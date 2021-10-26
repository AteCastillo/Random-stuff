#include <stdio.h>
/* reverse an interger */


int reverse(int a)
{
    int i, res;

    for (i = 1; i < a; i++)
    {
        if (a != 0)
        {
            res = a % 10; 
            printf("%d", res);
            a = a / 10;
        }
        
    }
        printf("%d\n", a);
        return 0;
}


int main (void)
{
    reverse(1985);
    return 0;
}