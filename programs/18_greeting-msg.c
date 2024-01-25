#include <stdio.h>

int main() 
{
    
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);
    if(age<5)
    {
       printf("nice kid\n"); 
    }
    else if(age<=10)
    {
        printf("nice child\n"); 
    }
    else if(age<=15)
    {
        printf("teenager\n"); 
    }
    else if(age<=25)
    {
        printf("young dynamic\n"); 
    }
    else if(age<=50)
    {
        printf("middle age\n"); 
    }
    else 
    {
        printf("old age\n");
    }

    return 0;
}
