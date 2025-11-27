#include<stdio.h>
int main()
{
     int arr[50],pos =0,ele=0,size=0;
    printf("Enter a size of array: \n");
    scanf("%d" , &size);
    if(size > 50)
    {
        printf("Array out of bound\n");
    }
    else
    {
        printf("Enter elements: \n");
        for(int i = 0; i < size; i++)
        {
            scanf("%d" , &arr[i]);
        }
        printf("Enter a element to search: \n");
        scanf("%d" , &ele);
        for(int i = 0; i < size; i++)
        {
            if(arr[i] == ele)
            {
                printf("Element found at position %d\n", i);
                break;
            }
        }
    }
}