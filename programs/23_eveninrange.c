/*#include <stdio.h>

int main() 
{
    
    int N1,N2;
    printf("enter the range\n");
    scanf("%d%d", &N1,&N2);
    
    while(N1<N2)
    {
        if(N1%2==0)
        {
         printf("%d ",N1);   
        }
        
       N1=N1+1;
    }
    printf("\n");
    return 0;
}*/


#include <stdio.h>

int main() 
{
    
    int N1,N2;
    printf("enter the range\n");
    scanf("%d%d", &N1,&N2);
    
    while(N1<N2)
    {
        for(N1=2;N1<N2; N1=N1+2)
        {
         printf("%d ",N1);   
        }
        
       
    }
    printf("\n");
    return 0;
}
