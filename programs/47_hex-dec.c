#include <stdio.h>
#include <string.h>

int main() 
{
    char hex[20];

    // Input hex number
    printf("Enter a hexadecimal number\n");
    scanf("%s", hex);

    int decimal = 0, base = 1, length = strlen(hex), i;

    // Iterate through each character of the hex number
    for (i = length - 1; i >= 0; i--) 
    {
        // Convert hex character to decimal value
        int digit;
        if (hex[i] >= '0' && hex[i] <= '9') 
        {
            digit = hex[i] - '0';
        } 
        else if (hex[i] >= 'A' && hex[i] <= 'F') 
        {
            digit = hex[i] - 'A' + 10;
        } 
        else if (hex[i] >= 'a' && hex[i] <= 'f') 
        {
            digit = hex[i] - 'a' + 10;
        } 
        else 
        {
            // Invalid hex character
            printf("Invalid hex character: %c\n", hex[i]);
            return 1; // Exit with error code
        }

        // Add the contribution of the current hex digit to the decimal value
        decimal=decimal+ digit * base;

        // Move to the next position (next power of 16)
        base=base*16;
    }

    // Display the result
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

