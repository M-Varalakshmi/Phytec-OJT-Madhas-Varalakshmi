#include <stdio.h>

int main() 
{
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms in the Fibonacci series\n");
    scanf("%d", &n);
    printf("Fibonacci Series\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}

