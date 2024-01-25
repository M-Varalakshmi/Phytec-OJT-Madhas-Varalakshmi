/*#include <stdio.h>

int main() 
{
    int range,count;
    printf("enter range\n");
    scanf("%d", &range);
    count=1;
    while (count<=range) 
    {
    	printf("%d ", count*5); 
        count=count+1;
    }

    printf("\n");
    return 0;
}*/


#include <stdio.h>

int main() 
{
    int range,count;
    printf("enter range\n");
    scanf("%d", &range);
    for(count=1;count<=range;count++)
    
    {
    	printf("%d ", count*5); 
       
    }

    printf("\n");
    return 0;
}





