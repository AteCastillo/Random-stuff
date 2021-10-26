#include <stdio.h>

int factorial(int n) { 

    int i = 0, fact = 0;

    for (i = 1; i <= n; i++) {
       
        if (n % i == 0)
            printf("%i is factorial\n", i);
    }

    
    return 0;

}


int main(void){
    factorial(12);
    return 0;

}