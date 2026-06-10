//write a program to check wether a number is palindrome
#include <stdio.h>

int main() {
    int number, originalNumber, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number > 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reverse) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}