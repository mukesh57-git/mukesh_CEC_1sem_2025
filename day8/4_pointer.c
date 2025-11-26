#include<stdio.h>
int main()
{
    int num = 100;
    int *ptr = &num;
    printf("Value of num: %d\n", num);
    printf("value of ptr: %p\n", ptr);
    printf("value of ptr using num: %p\n", &num);
}