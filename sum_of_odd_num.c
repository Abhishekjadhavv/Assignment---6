// Write a program to calculate sum of first N odd natural numbers

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter a number");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i * 2 - 1;
    }

    printf("sum of first %d odd number is %d", n, sum);
    return 0;
}