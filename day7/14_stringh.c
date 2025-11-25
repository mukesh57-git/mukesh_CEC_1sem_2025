#include<stdio.h>
#include<string.h>
int main()
{
    char user_input[100];
    printf("Enter a string: ");
    fgets(user_input, 100, stdin);
    printf("Entered string is: %s",user_input); 
}