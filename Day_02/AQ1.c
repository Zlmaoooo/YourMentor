// Write a program that uses goto to skip negative numbers and print only non-negative numbers entered by the user

#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Enter a number (or -999 to exit): ");
        scanf("%d", &num);

        if (num == -999) {
            break;
        }

        if (num < 0) {
            goto skip_print;
        }

        printf("You entered: %d\n", num);

        skip_print:
            continue;
    }

    return 0;
}