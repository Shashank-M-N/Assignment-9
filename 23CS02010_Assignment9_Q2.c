#include <stdio.h>

struct students
{
    char rollno[10];
    char name[10];
    char address[100];
    int age;
    int avgmarks;
} student[6];

void getdata()
{
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the roll number of student %d: ", i + 1);
        gets(student[i].rollno);
        printf("Enter the name of student %d: ", i + 1);
        gets(student[i].name);
        printf("Enter the address of student %d: ", i + 1);
        gets(student[i].address);
        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &student[i].age);
        printf("Enter the average marks of student %d: ", i + 1);
        scanf("%d", &student[i].avgmarks);
    }
}

void displaydata()
{
    for (int i = 0; i < 6; i++)
        printf("\nRoll Number of student %d: %s\nName of student %d: %s\nAddress of student %d: %s\nAge of student %d: %d\nAverage Marks of student %d: %d\n", i + 1, student[i].rollno, i + 1, student[i].name, i + 1, student[i].address, i + 1, student[i].age, i + 1, student[i].avgmarks);
}

int main()
{
    getdata();
    displaydata();
    return 0;
}