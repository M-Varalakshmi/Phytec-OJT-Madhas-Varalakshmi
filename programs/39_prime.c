#include <stdio.h>

int main() 
{
    int n, count=1;
    printf("Enter a number above 2\n");
    scanf("%d", &n);
    for (int i = 2; i <= n/2; i++) 
    {
       if (n % i == 0) 
       {
          count = 0; 
          break;
       }
    }
    if (count) 
    {
        printf("%d is a prime number.\n", n);
    } 
    else 
    {
        printf("%d is not a prime number.\n", n);
    }
   return 0;
}
