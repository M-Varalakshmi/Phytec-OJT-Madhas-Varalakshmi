#include <stdio.h>

int main() 
{
    float pi=3.14,perimeter,r;   
    printf("enter the radius of circle\n");
    scanf("%f",&r);
    perimeter = 2*pi*r;
    printf("perimeter of circle is %f\n",perimeter);

    return 0;
}
