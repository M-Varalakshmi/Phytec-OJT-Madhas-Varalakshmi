#include <stdio.h>

int main() 
{
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) 
    {
        if (a > c) 
        {
            printf("a is the bigger value\n");
        } 
        else 
        {
            printf("c is the bigger value\n");
        }
    } 
    else 
    {
        if (b > c) 
        {
            printf("b is the bigger value\n");
        } 
        else 
        {
            printf("c is the bigger value\n");
        }
    }

    return 0;
}
