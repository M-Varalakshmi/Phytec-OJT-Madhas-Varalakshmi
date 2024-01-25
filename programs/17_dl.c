#include <stdio.h>

int main() 
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);
    if(age>=18)
    {
       printf("Eligible for driving license\n"); 
    }
    else 
    {
        printf("Not eligible for driving license\n"); 
    }

    return 0;
}
