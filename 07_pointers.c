#include <stdio.h>

void swap(int *a, int *b);

void mixOperation(int a, int b, int *sum, int *prod);

int main()
{
    int marks = 45;

    // pointer to variable
    int *ptr = &marks;

    printf("The value of marks is %d\n", marks);
    printf("The value of marks is %d\n", *ptr);

    printf("The address of marks is %u\n", &marks);
    printf("The address of marks is %u\n", ptr);

    // pointer to pointer
    int **pptr = &ptr;

    printf("The address of pointer is %u\n", &ptr);
    printf("The address of pointer is %u\n", pptr);

    // pointer in functions
    int a = 23, b = 56;
    printf("The value of a is %d and b is %d\n", a, b);
    swap(&a, &b);
    printf("The value after swap of a is %d and b is %d\n", a, b);

    // returning mutiple values
    int x = 12, y = 78;
    int sum, prod;
    mixOperation(x, y, &sum, &prod);
    printf("Sum  :  %d\n", sum);
    printf("Product  :  %d\n", prod);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void mixOperation(int a, int b, int *sum, int *prod)
{
    *sum = a + b;
    *prod = a * b;
}