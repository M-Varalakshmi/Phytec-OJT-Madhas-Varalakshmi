/*#include <stdio.h>

int main() 
{
    int N,n;
    printf("enter the range\n");
    scanf("%d", &n);
    N=n;
    while (N <= n) 
    {
        if(N>=1)
        {
           printf("%d ", N); 
        }
        
        N=N-1;
    }
    printf("\n");
    return 0;
}9*/


/*#include <stdio.h>

int main() 
{
    
    for(int i=40;i>0;i--)
    {
        printf("%d ",i);
        
    }
    printf("\n");
    return 0;
}*/



/**
 * C program to all natural numbers in reverse in given range
 */

#include <stdio.h>

int main()
{
    int i, n1, n2;

    /* Input start and end limit from user */
    printf("Enter starting value: ");
    scanf("%d", &n1);
    printf("Enter end value: ");
    scanf("%d", &n2);

    /*
     * Run loop from 'start' to 'end' and 
     * decrement by 1 in each iteration
     */ 
    for(i=n1; i>=n2; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
