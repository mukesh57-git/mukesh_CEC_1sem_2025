#include<stdio.h>
int main()
{
   int arr[3]= {100,200,300};
   int *ptr = &arr[0];
   printf("Address of arr: %p \n", &arr[0]);
   printf("address of arr: %p \n", arr);
   printf("adress of arr using pointer: %p\n",ptr);
   printf("adress of arr[1] using pointer: %p \n" , ptr+1);
}
              //    POINTER ARTHEMATIC