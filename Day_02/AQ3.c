//  Write a program that uses break to exit a loop when a user enters a specific number 

#include <stdio.h>

int main() {
    int num;
    while (1) {
        printf("Enter a number (or 0 to exit): ");
        scanf("%d", &num);
        if (num == 0) {
            break; 
        }
        printf("You entered: %d\n", num);
    }

    printf("Loop exited. Goodbye!\n");

    return 0;
}