// Write a program to print all prime numbers between 1 and n, where n is entered by the user
#include<stdio.h>
int main ()
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
                }
                }
                if (flag == 0)
                {
                    printf("%d ", i);
                    }
                    }
return 0;

}