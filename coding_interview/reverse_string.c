#include <stdio.h>
#include <string.h>

/* reverse a string */

int reverse(char *s)
{
    int i, n;
    //int len = strlen(s);

    for (n =0; s[n] != '\0'; n++) 
    {
        n += 1; 
    }
    printf("%d\n", n);
    for (i = n; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
        printf("\n");
    return 0;
}

int main ()
{
    char *s = "Idontknow";

    reverse(s);
    return 0;
}