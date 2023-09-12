#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    // Ask the user to enter the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
