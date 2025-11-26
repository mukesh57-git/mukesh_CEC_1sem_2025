#include <stdio.h>
int main()
{
    int arr[5];
    int min, second_min;
    printf("Enter 5 elements in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = second_min = arr[0];
    for(int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            second_min = min;
            min = arr[i];
        }
        else if(arr[i] < second_min && arr[i] != min)
        {
            second_min = arr[i];

        }
    }
    printf("The 2nd minimum value is: %d ", second_min);
}