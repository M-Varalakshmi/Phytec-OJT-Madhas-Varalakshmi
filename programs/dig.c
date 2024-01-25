#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for later comparison
    originalNum = num;

    // Calculate the sum of digits using a while loop
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    // Display the result
    printf("The sum of digits of %d is: %d\n", originalNum, sum);

    return 0;
}

