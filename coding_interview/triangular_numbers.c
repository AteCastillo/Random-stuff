#include <stdio.h>

/* to calculate triangular numbers*/

int main(void)
{   
    int triangular = 0, n = 5, i = 1;
    
    /*
    printf("what number?\n");
    scanf ("%i", &n);
    */
    /*
    for (int i = 1; i <= n; ++i)
        {
            triangular+= i;
            printf ("triangular:%d %d \n", triangular, i);
        }
    return 0;
    */
    while (i <= n)
        {
            triangular+= i;
            printf ("triangular:%d %d \n", triangular, i);
            i++;   
        }

}
/*
int new(void)
{
    int n = 4;
    return n;
}
*/