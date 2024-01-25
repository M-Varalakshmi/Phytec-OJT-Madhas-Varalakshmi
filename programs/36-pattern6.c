#include <stdio.h>

int main() {
   
    int row = 5, rowcount = 2, spcount, Acount, Bcount;  // Declare spcount, acount, and bcount

    while (row >0) {
        for (spcount = 0; spcount <row; spcount++) {
            printf(" ");
        }

        for (Acount = 1; Acount <= (rowcount / 2); Acount++) {
            printf("A");  
        }

        for (Bcount = 1; Bcount <= (rowcount / 2); Bcount++) {
            printf("B");  
        }

        printf("\n");  

        rowcount = rowcount + 2;
        row--;
    }

    return 0;
}


