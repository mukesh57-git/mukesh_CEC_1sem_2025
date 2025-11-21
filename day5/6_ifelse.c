#include<stdio.h>
int main(){
    int a , b;
    printf("Enter the two numbers");
    scanf("%d %d" , &a,&b);
    if(a>b){
        printf("a is larger number than b");
    }else{
        printf("b is larger number than a");
    }
}