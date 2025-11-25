#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[] = "pavan";
    char last_name[] = "gowda";
    char another_name[] = "pavan";
    printf("Length of first_name: %lu\n", strlen(first_name));
    printf("Full name: %s\n", strcat(first_name, last_name));
    printf("%d\n", strcmp(first_name, another_name));
    if (strcmp(first_name, another_name) == 0)
    {
        printf("both strings are equal \n");
    }
    else
    {
        printf("both string are not equal \n");
    }
    printf("All the strings are:\n %s.\n %s.\n %s\n.", first_name, last_name, another_name);
}
