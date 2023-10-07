#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    int id;
    char name[20];
    int age;
} employ;

void takeStruct(struct Employee *empl);

void scanStruct(struct Employee *emp, int id, char name[], int age);

void printStruct(struct Employee emp);

void scanStructArray(struct Employee emp[], int n);

void printStructArray(struct Employee emp[], int n);

int main()
{
    employ e = {102, "Pratyush Gupta", 21};
    printStruct(e);

    employ e1;
    e1.id = 100;
    strcpy(e1.name, "Rabish Gupta");
    e1.age = 23;

    printf("ID of employee e1 : %d\n", e1.id);
    printf("Name of employee e1 : %s\n", e1.name);
    printf("Age of employee e1 : %d\n", e1.age);

    employ e2;
    scanStruct(&e2, 101, "Sriyush Gupta", 17);
    printStruct(e2);

    // Structure array

    //employ developer[3];

    //developer[0].id = 201;
    //strcpy(developer[0].name, "Rahul");
    //developer[0].age = 30;
    //printStruct(developer[0]);

    //takeStruct(&developer[1]);
    //printStruct(developer[1]);

    scanStructArray(developer, 3);

    printStructArray(developer, 3);

    return 0;
}

void takeStruct(struct Employee *empl)
{
    int id, age;
    char name[20];

    printf("Enter the id of employee  :  ");
    scanf("%d", &id);
    printf("Enter the name of employee  :  ");
    scanf("%s", name);
    printf("Enter the age of employee  :  ");
    scanf("%d", &age);

    empl->id = id;
    strcpy(empl->name, name);
    empl->age = age;
}

void scanStruct(struct Employee *emp, int id, char name[], int age)
{
    emp->id = id;
    strcpy(emp->name, name);
    emp->age = age;
}

void printStruct(struct Employee emp)
{
    printf("ID of employee  : %d\n", emp.id);
    printf("Name of employee : %s\n", emp.name);
    printf("Age of employee : %d\n", emp.age);
}

void scanStructArray(struct Employee emp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n*****************************\n");
        printf("Employee %d  :  \n", i + 1);
        printf("*****************************\n\n");

        takeStruct(&emp[i]);
    }
}

void printStructArray(struct Employee emp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n*****************************\n");
        printf("Employee %d\n", i + 1);
        printf("*****************************\n\n");
        printStruct(emp[i]);
    }
}