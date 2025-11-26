#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int roll_num;
    int marks;
} st1, st2;
int main()
{
    strcpy(st1.name, "John Doe");
    st1.marks = 12;
    st1.roll_num = 101;
    printf("Student details: \n");
    printf("Name: %s\n", st1.name);
    printf("Roll Number: %d\n", st1.roll_num);
    printf("Marks: %d\n", st1.marks);

    strcpy(st2.name, "Jane Smith");
    st2.marks = 15;
    st2.roll_num = 102;
    printf("\nStudent details: \n");
    printf("name: %s\n", st2.name);
    printf("Roll Number: %d\n", st2.roll_num);
    printf("Marks: %d\n", st2.marks);
}