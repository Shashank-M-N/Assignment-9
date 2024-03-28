#include <stdio.h>

struct address
{
    char street[20];
    char city[20];
    char zip[20];
};

struct person
{
    char name[20];
    struct address add;
}p;

int main()
{

    printf("Enter the name of the person: "); 
    gets(p.name);
    printf("Enter the address of the person: \nEnter the street name: ");
    gets(p.add.street);
    printf("Enter the city's name: ");
    gets(p.add.city);
    printf("Enter the zipcode: ");
    gets(p.add.zip);
    printf("\nThe deatils of the person is:\nName: %s\nAdrress: %s,%s,%s",p.name, p.add.street,p.add.city,p.add.zip);
}