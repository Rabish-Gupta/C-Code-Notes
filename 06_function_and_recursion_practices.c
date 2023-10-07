#include <stdio.h>
#include <math.h>

// function prototype
float average(float a, float b, float c);
float fahrenheit(float celcius);
int sigma(int n);
int fib(int n);

void printSquare(int n);
void printTriangle(int n);
void othertriangle(int n);
void sinFunc(double n);

int main()
{
    // // Average of the three numbers
    // printf("Average of the three numbers is  %.1f\n", average(3, 6, 9));

    // // celcius to fahrenheit
    // printf("The value of degree celcius in fahrenheit is  :  %.1f\n", fahrenheit(37));

    // // sum of n natural numbers
    // int a = 4;

    // printf("The sum of %d natural numbers is :  %d\n", a, sigma(a));

    // // fibonacci sequence
    // int term;
    // printf("Enter the term of fibonacci sequence  :  ");
    // scanf("%d", &term);

    // printf("The %d term of fibonacci sequence is %d\n", term, fib(term));

    // print pattern
    printSquare(4);

    printTriangle(4);

    othertriangle(5);

    sinFunc(3.14);

    return 0;
}

// function definition
float average(float a, float b, float c)
{
    return (a + b + c) / 3;
}

float fahrenheit(float celcius)
{
    return celcius * (9.0 / 5) + 32;
}

int sigma(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (sigma(n - 1) + n);
}

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

void printSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void printTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void othertriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void sinFunc(double n)
{
    for (double i = 0; i <= n; i += 0.2)
    {
        for (double j = 0; j <= (50 * (sin(i))); j++)
        {

            printf("*");
        }
        printf("\n");
    }
}
