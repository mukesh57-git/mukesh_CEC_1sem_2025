#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter a natural number:");
    scanf("%d", &n);
    while(n>0)
    {
        sum += n;
        n--;
    } 
    //sum = n * (n + 1) / 2;
    printf("Sum of first %d natural numbers is: %d \n", n,sum);
}