#include <stdio.h>

/* caculate the first 15 fibonacci numbers */

int main ()
{
    int i = 0;
    int *fib;

    fib [0] = 0;
    fib [1] = 1;

    printf ("%d\n%d\n", fib [0], fib[1]);
    for (i = 2; i < 15; i++)
    {
        fib [i] = fib [i - 1] + fib [i - 2];
        printf("%d\n", fib[i]);
        
    }
    return 0;
}