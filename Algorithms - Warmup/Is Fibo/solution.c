#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    int isFib = 0;
    int i,j;
    long long unsigned int num;
    long long unsigned int fib1 = 0;
    long long unsigned int fib2 = 1;
    long long unsigned int nextfib = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        scanf("%lld", &num);
        while ( nextfib < num )
        {
            nextfib = fib1 + fib2;
            if ( nextfib == num )
            {
                isFib = 1;
            }

            fib1 = fib2;
            fib2 = nextfib  ;
        }

        if ( isFib )
        {
            printf("IsFibo\n");
        }
        else
        {
            printf("IsNotFibo\n");
        }

        fib1 = 0;
        fib2 = 1;
        isFib = 0;
        nextfib = 0;
        n--;
    }
    return 0;
}