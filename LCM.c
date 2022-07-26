// Write a program to calculate LCM of two numbers

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two number\n");
    scanf("%d%d", &a, &b);

    for (int i = a < b ? a : b; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("Lcm is %d", i);
            break;
        }
    }

    return 0;
}