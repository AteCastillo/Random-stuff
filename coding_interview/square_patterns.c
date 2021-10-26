#include <stdio.h>
/* to print a triangle of n number */


int print_square(int n)
// paralel bars
{
    int row = 0, column = 0;

    for (row = 1; row <= n; ++row)
    {
        for (column = 1; column <= n; ++column)
        {
            if (column == 1 || column == n) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;

}

// plus cross

int print_plus(int n)
// paralel bars
{
    int row = 0, column = 0;

    for (row = 1; row <= n; ++row)
    {
        for (column = 1; column <= n; ++column)
        {
            if (row == n/2+1 || column == n/2+1) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;

}

//cross

int cross(int n)
// paralel bars
{
    int row = 0, column = 0;

    for (row = 0; row < n; ++row)
    {
        for (column = 0; column < n; ++column)
        {
            if (row == column || row + column == n-1) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;

}


int main(){

    print_square(5);
    print_plus(5);
    cross(5);
    return 0;
}
