// Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main(){
    int n,sum=0;
     printf("Enter a number");
     scanf("%d",&n);

    while(n){
     sum+=n;
     n--;
    }

    printf("sum is %d",sum);
    return 0;
}