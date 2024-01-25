/*
#include <stdio.h>

int main() 
{
    int rowcount=5,row=1, column;
    while(row<=rowcount)
    {
        for(column=1; column<=row; column++)
        {
            printf("x ");
        }
        row++;
        printf("\n");
        
    }
    

    return 0;
}*/



#include <stdio.h>

int main() 
{
    
    for (int row = 1; row <= 5; row++) 
    {
     for (int column = 1; column <= row; column++) 
     {
    	 printf("X ");
     }
     printf("\n");
     
    }

    return 0;
}

