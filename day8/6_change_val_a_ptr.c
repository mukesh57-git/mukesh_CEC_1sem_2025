#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("before change:%d\n", a);
    *ptr = 20;
    (*ptr)++;
    printf("after change:%d\n", a);
}