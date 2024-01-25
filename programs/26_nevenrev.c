/*#include <stdio.h>

int main() 
{
	int N,n;   
	printf("Enter the range\n");
	scanf("%d", &n);
	N=n*2;
	while (N>=0) 
	{
        if(N>=2)
        {
        	printf("%d ", N); 
        }
        N=N-2;
        }
	printf("\n");
	return 0;
}*/




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
    for(i=n1; i>=n2; i=i-2)
    {
        printf("%d\n", i);
    }

    return 0;
}
