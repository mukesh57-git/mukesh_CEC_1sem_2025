#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");   
    scanf("%d", &num);
    int count = 0;
    while(num != 0)
    {
        int digit = num % 10;   
        count++;
        num = num/ 10;
    }
    printf("Number of digits are: %d \n", count);
}