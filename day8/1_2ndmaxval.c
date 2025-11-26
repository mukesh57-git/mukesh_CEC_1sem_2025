#include <stdio.h>
int main()
{
    int arr[5];
    int max, second_max;
    printf("Enter 5 elements in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = second_max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if(arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];

        }
    }
    printf("The 2nd maximum value is: %d ", second_max);
}