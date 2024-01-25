#include <stdio.h>

int main() 
{
    int a,b;
    printf("Enter two numbers: a&b\n");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
    	printf("a is the biggest value\n");
    }
    else
    {
    	printf("b is the biggest value\n");
    }
    return 0;
}
