#include<stdio.h>
int main()
{
    int num,duplicate,reverse=0, digit=0;
    printf("Enter a number:");
    scanf("%d", &num);
    duplicate = num;
    while(num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if(duplicate == reverse)
        printf("The number %d is a palindrome\n", duplicate);
    else
        printf("The number %d is not a palindrome\n", duplicate);
}