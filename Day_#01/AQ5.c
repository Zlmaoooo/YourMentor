// . Write a program to swap the values of two variables without using a third variable (using arithmetic operations).

#include<stdio.h>
int main(){
    int a = 5, b = 10;
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}