#include <stdio.h>

int absolute(int a)
{
    if (a < 0)
    {
        a *= -1;
    }
    return 0;

}

int main (void){
    printf("%d\n", absolute(-154));
    return 0;
}
