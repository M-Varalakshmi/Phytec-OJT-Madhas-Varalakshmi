#include <stdio.h>

int main() 
{
    
    int i1,i2,i3,i4,i5,i6;

    int sumofentering, sumofleaving;
   
    printf("Enter sum of entering current values:\n");
    scanf("%d%d%d%d",&i1,&i2,&i4,&i5);

    printf("Enter sum of leaving current values:\n");
    scanf("%d%d",&i3,&i6);
    sumofentering= i1+i2+i4+i5;
    sumofleaving= i3+i6;
   
   
   if(sumofentering==sumofleaving)
   {
       printf("kirchoffs law satisfied\n");
       
   }
   else 
   {
       printf("kirchoffs law not satisfied\n");
   }


   
    return 0;
}
