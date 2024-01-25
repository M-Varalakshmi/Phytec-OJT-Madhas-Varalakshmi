
/*#include <stdio.h>

int main() 
{
   int row=5, column;
   while(row>0)
    {
        for(column=1; column<=row; column++)
        {
          printf("A ");
        }
        row--;
        printf("\n");
        
    }
  return 0;
}*/



#include <stdio.h>

int main() 
{
    
    for (int row = 5; row >=0; row--) 
    {
     for (int column = 1; column <=row; column++) 
     {
    	 printf("A ");
     }
     printf("\n");
     
    }

    return 0;
}





