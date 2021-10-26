#include <stdio.h>
/* to print a triangle of n number */

int print_square(int n)
{
    int row = 0, column = 0;

    for (row = 0; row < n; ++row)
    {
        for (column = 0; column < row; ++column)
        {
                
            printf("%d", column);
        }
        printf("\n");
    }

    return 0;

}



int main(){
    print_square(2);
    print_square(4);
    return 0;
}
