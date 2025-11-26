#include<stdio.h>
int main()
{
   int a = 10;
   int *p = &a;

   // VALUE OF A  
  // printf("Value of a: %d\n", a); 
  // printf("value of a: %d\n" ,*p);
   //printf("value of a: %d\n" , *(&a));
 //  printf("value of a: %d\n" , *(*(&p)));
  // printf("value of a: %d\n" , *(&(*(&a))));

        //VALUE OF P  

   printf("value of p: %p\n" , p);
   printf("value of p: %p\n" , &a);
   printf("value of p: %p\n" , *(&p));
   printf("value of p: %p\n" , &(*(&a)));

}