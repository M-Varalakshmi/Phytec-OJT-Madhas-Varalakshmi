#include <stdio.h>

int main() 
{
    float a,b,c;
    float Avg;
    printf("enter 3 numbers\n");
    scanf("%f%f%f",&a,&b,&c);
    Avg = (a+b+c)/3;
    printf("average  of numbers is %f\n",Avg);

    return 0;
}
