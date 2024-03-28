#include <stdio.h>

int main()
{
    struct company
    {
        char name[20];
        char address[100];
        char phone_no[11];
        int noOfEmployees;
    } com;
    printf("Enter the company details:\nEnter the name of company: ");
    gets(com.name);
    printf("Enter the address of company: ");
    gets(com.address);
    printf("Enter the phone number: ");
    gets(com.phone_no);
    printf("Enter the number of employees: ");
    scanf("%d", &com.noOfEmployees);
    printf("\n The name of company is: %s \n The address is: %s \n The phone number is: %s \n The number of employees is: %d ", com.name, com.address, com.phone_no, com.noOfEmployees);
    return 0;
}