#include <stdio.h>
/* to print a square of n number */

int print_square(int n)
{
    int row = 0, column = 0;

    for (row = 0; row < n; ++row)
    {
        for (column = 0; column < n; ++column)
        {
            printf("#");
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
