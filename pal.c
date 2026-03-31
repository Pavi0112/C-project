#include <stdio.h>

void Palindrome() {
    int n, reversedNumber = 0, remainder, originalNumber;

    printf("\nEnter an integer: ");
    scanf("%d", &n);

    originalNumber = n; // Store the original number for comparison

    // Reverse the number using a loop
    while (n != 0) {
        remainder = n % 10;           // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
        n /= 10;                      // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    //return 0;
}

