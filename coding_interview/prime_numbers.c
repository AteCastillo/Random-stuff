#include <stdio.h>

/* check in a number n is prime */
 int prime(int n)
 {
     int i, count = 0;

    for(i = 1; i <= n; i++)
    {
        if (n % i == 0) 
            count++;
    }
        if (count == 2)
        
            // count == 2 because a prime number is only divisible by 2 numbers
            printf("%d is prime\n", n);
        else
            printf("%d is not prime\n", n);
    return 0;
 }
 
// print prime numbers in an interval
int prime_interval(int n, int m)
{
    int j = 0, counts = 0, x = 0;

    for ( j = n; j <= m; j++)
    {
        counts = 0;
        for(x = 1; x <= m; x++)
        {
            if (j % x == 0)
                counts ++;
        }
        if (counts == 2)
                // count == 2 because a prime number is only divisible by 2 numbers
        {
            printf("%d is prime\n", j);
        }
        else
        {
            printf("%d is not prime\n", j);
        }
      
    }
        return 0;

}



int main() {
    
    prime(7);
    prime(15);
    prime_interval(1, 20);
    return 0;
}


