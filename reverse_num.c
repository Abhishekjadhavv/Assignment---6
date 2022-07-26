// Write a program to reverse a given number
#include <stdio.h>

int main()
{

    int num, r, result = 0;

    printf("Enter a number");
    scanf("%d", &num);

    while (num)
    {
        r = num % 10;
        result = result * 10 + r;
        num /= 10;
    }

    printf("reverse number is %d", result);
    return 0;
}