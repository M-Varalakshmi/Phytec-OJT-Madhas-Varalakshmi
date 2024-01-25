#include <stdio.h>

int main()
{
    int v, i, r1, r2, r3;
    float x; 
    printf("Enter the values of v, i, r1, r2, r3\n");
    scanf("%d%d%d%d%d", &v, &i, &r1, &r2, &r3);
    x = (r1 / r3) * r2;
    printf("Value of x is %f\n", x);
    return 0;
}
