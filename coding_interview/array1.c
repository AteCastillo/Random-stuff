#include <stdio.h>
#include <string.h>
/* working with simple arrays */

int simple_array(int *s, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%d  %d\n", i, s[i]);
    }
    return 0;
}

int main()
{
    int s[4] = {197, -100, 350, 10};
    simple_array(s, 4);
    return 0;

}