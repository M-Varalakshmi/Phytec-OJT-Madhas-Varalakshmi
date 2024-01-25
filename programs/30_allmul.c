#include <stdio.h>

int main()
 {
    
   for (int num = 2; num <= 10; num++) 
   {
        for (int count = 1; count <= 10; count++)
        {
            printf("%d * %d = %d\n", num, count, num * count);
        }
        printf("\n"); 
    }

    return 0;
}


/*#include <stdio.h>

int main()
 {
    
   for (int i=0; i <= 10; i++) 
   {
        for (int j= 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

    return 0;
}*/
