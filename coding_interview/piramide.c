#include <stdio.h>
/* to print a triangle of n number */

int print_square(int n)
{
    int row = 0, column = 0;

    for (row = 1; row <= n; ++row)
    {
        for (column = row; column <= n; ++column)
        {
            printf(" ");
        }
        for (column = 1; column < row; ++column)
        {
            printf("*");
        }
        for (column = 1; column <= row; ++column)
        {
            printf("*");
        }
      
       
        printf("\n");
    }


    return 0;

}

/* for inverted piramyd */
int print_squares(int n)
{
    int row = 0, column = 0;

    for (row = 1; row <= n; ++row)
    {
        for (column = 1; column <= row; ++column)
        {
            printf(" ");
        }
        for (column = row; column < n; ++column)
        {
            printf("*");
        }
        for (column = row; column <= n; ++column)
        {
            printf("*");
        }
      
       
        printf("\n");
    }


    return 0;

}
int main(){
    print_square(8);
    print_squares(8);
    return 0;
}
