#include <stdio.h>

// Function prototype
void printHello();
float prod(float a, float b);
int factorial(int a);

int main()
{
    // function call
    printHello();

    printf("The product of a and b is %f\n", prod(3, 12));

    // recursion
    int number;
    printf("Enter your number  :  ");
    scanf("%d", &number);

    printf("The factorial of %d is %d", number, factorial(number));

    return 0;
}
// Function definition
void printHello()
{
    printf("Hello world! I am learning C language .\n");
}

float prod(float a, float b)
{
    return a * b;
}

int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}
