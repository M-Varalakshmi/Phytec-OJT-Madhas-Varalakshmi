#include <stdio.h>

int main() 
{
    float marks[5];
    float total = 0, per;
    
    printf("Enter marks for 5 subjects : \n");

     for (int i = 0; i < 5; i++) 
     {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
         if (marks[i] > 0 && marks[i] <= 100)  
        {
            total = total + marks[i];
        }
        else 
        {
		printf("Invalid input! Marks should be between 0 and 100.\n");
		printf("Enter marks for Subject %d: ", i + 1);
                scanf("%f", &marks[i]);
        }
        
    
    }
    per = (total / 500) * 100;
    
    if (per > 80)
    {
        printf("Grade A\n");
    }
    else if (per > 60)
    {
        printf("Grade B\n");
    }
    else if (per > 40)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade D\n");
    }

    return 0;
}

