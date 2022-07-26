// Write a program to calculate sum of first N even natural numbers
#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter a number");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i * 2;
    }

    printf("sum of first %d even number is %d",n, sum);
    return 0;
}