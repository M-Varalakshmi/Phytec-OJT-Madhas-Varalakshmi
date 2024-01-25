#include <stdio.h>

int main() 
{
    float marks[5];
    float total = 0, per;
    printf("Enter marks of 5 subjects English, Maths, Social, Science, C for 100 marks for each subject\n");
    for (int i = 0; i < 5;i++) 
    {
        printf("Enter marks %d: ", i + 1);
        scanf("%f", &marks[i]);
        total = total + marks[i];
    }
    
    per=(total/500)*100;
    
    if(per>80)
    {
        printf("Grade A\n");
    }
    else if(per>60)
    {
        printf("Grade B\n");
    }
    else if(per>40)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade D\n");
    }
    return 0;
}

