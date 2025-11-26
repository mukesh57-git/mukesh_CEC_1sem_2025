#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("Value of a and b before swap: %d %d\n", a, b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Value of a and b after swap: %d %d\n", a, b);
}