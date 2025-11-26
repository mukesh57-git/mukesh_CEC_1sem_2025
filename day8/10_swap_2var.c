#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    printf("value of a and b before change:\n %d %d",a,b );
    int temp=a;
    a=b;
    b=temp;
    printf("\nvalue of a and b after change:\n %d %d",a,b );
}