// Write a program to check whether a given number is a Prime number or
// not

#include <stdio.h>

int main()
{

    int n, i;
    printf("Enter a number\n");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }

    if (i == n)
    {
        printf("Given number is prime number\n");
    }
    else
    {
        printf("Given number is not prime number");
    }

    return 0;
}