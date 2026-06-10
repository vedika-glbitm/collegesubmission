//write a program to find product of digits
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, remainder, product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        product = 0;
    } else {
        number = abs(number);
        while (number > 0) {
            remainder = number % 10;
            product *= remainder;
            number /= 10;
        }
    }

    printf("Product of digits = %d\n", product);

    return 0;
}