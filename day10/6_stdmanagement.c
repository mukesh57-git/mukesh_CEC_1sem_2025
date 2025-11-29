#include <stdio.h>
void NAME();
void ROLL_NUM();
void AGE();

int main()
{
    int choice;

    while (1)
    {
        printf("\nEnter student info option:\n");
        printf("1. NAME\n");
        printf("2. ROLL_NUM\n");
        printf("3. AGE\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            NAME();
            break;
        case 2:
            ROLL_NUM();
            break;
        case 3:
            AGE();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    }
}



void NAME()
{
    char name[50];
    printf("Enter student name: ");
    scanf("%s", name);       
    printf("Student Name: %s\n", name);
}

void ROLL_NUM()
{
    int roll;
    printf("Enter student roll number: ");
    scanf("%d", &roll);
    printf("Student Roll Number: %d\n", roll);
}

void AGE()
{
    int age;
    printf("Enter student age: ");
    scanf("%d", &age);
    printf("Student Age: %d\n", age);
}
