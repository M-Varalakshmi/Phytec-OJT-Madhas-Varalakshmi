/*
#include <stdio.h>

int main() 
{
    int row = 1, rowcount = 5, bcount, spcount;

    while (row <= 5) 
    {
        // Print spaces before 'B'
        for (spcount = 1; spcount < row; spcount++) 
        {
            printf("  ");
        }

        // Print 'B' characters
        for (bcount = 1; bcount <= rowcount; bcount++) 
        {
            printf("B ");
        }

        rowcount--;
        row++;
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main() 
{
    int rowcount = 5;

    for (int row = 1; row <= 5; row++) 
    {
        // Print spaces before 'B'
        for (int spcount = 1; spcount < row; spcount++) 
        {
            printf("  ");
        }

        // Print 'B' characters
        for (int bcount = 1; bcount <= rowcount; bcount++) 
        {
            printf("B ");
        }

        rowcount--;
        printf("\n");
    }

    return 0;
}*/


#include <stdio.h>

int main() 
{
    int rowcount = 5;

    for (int i = 1; i <= 5; i++) 
    {
        // Print spaces before 'B'
        for (int j = 1; j < i; j++) 
        {
            printf("  ");
        }

        // Print 'B' characters
        for (int k = 1; k <= rowcount; k++) 
        {
            printf("B ");
        }

        rowcount--;
        printf("\n");
    }

    return 0;
}

