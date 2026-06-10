//write a program to find sum of digits of a number
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = abs(number);

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}