// Write a program to calculate factorial of a number

#include <stdio.h>

int main()
{
    int n, fact = 1,x;

    printf("Enter a number");
    scanf("%d", &n);
    x=n;
    while (x)
    {
        fact *= x--;
    }

    printf("factorial of %d is %d",n, fact);

    return 0;
}