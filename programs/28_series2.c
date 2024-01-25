/*#include <stdio.h>

int main()
{
    
    int range,count;
    printf("enter range\n");
    scanf("%d", &range);
    count=1;
    while (count <= range) 
    {
     printf("%d %d ", count*2,count*4);
     count=count+1;
    }

    printf("\n");
    return 0;
}*/



#include <stdio.h>

int main() 
{
    int range;
    printf("Enter range\n");
    scanf("%d", &range);

    for (int count = 1; count <= range; count++) 
    {
        printf("%d %d ", count*2,count*4);
    }

    printf("\n");
    return 0;
}

