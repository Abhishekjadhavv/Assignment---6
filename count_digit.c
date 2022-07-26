// Write a program to count digits in a given number

#include <stdio.h>

int main()
{

    int n, countdigits = 0;

    printf("Enter a number\n");
    scanf("%d",&n);

    while (n)
    {
        countdigits++;
        n/=10;
    }

    printf("digits is %d",countdigits);
    return 0;
}