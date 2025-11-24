#include <stdio.h>
void add();
int sub();
int main()
{
    printf("main function\n");
    add();
    int res = sub();
    printf("subtraction is: %d\n", res);
}
void add()
{
    printf("addition is: %d\n", (10 + 10));
}
int sub()
{
    return (30 - 20);
}