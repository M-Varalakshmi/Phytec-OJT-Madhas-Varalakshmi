#include <stdio.h>

int main() 
{
    int N, i, fact=1;

        printf("Enter a number\n");
        scanf("%d",&N);
        for (i = 1; i <= N; i++) 
        {
            fact=fact*i;
        }
        printf("Factorial of %d = %d\n", N, fact);
        return 0;
}

