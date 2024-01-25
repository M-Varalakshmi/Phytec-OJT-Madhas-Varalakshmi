#include<stdio.h>

int main() 
{
    int decimal = 0, weight = 1, remainder, binary;

    // Input binary number from the user
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    while (binary != 0) 
    {
        remainder = binary % 10;
        decimal = decimal + remainder * weight;
        binary = binary / 10;
        weight = weight * 2;
    }

    // Display the decimal equivalent
    printf("The decimal value is: %d\n", decimal);

    return 0;
}

