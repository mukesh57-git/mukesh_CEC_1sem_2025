#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of ptr: %p \n" , &ptr);
    printf("Address stored in ptr: %p \n", ptr);
    printf("Value pointed to by ptr: %d \n", *ptr);

}