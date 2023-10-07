#include <stdio.h>

int main()
{
    // tricky question - 1
    // int ___ = 34;
    // printf("%d\n", ___);

    // // area of square
    // float side;
    // printf("Enter the value of the side of square  :  ");
    // scanf("%f", &side);

    // printf("The area of square is  :  %f\n", side * side);

    // // area of circle
    // float radius;
    // printf("Enter the value of radius of circle  :  ");
    // scanf("%f", &radius);

    // printf("The area of circle is  : %f\n", 3.14 * radius * radius);

    // // area of rectangle
    // float length, breadth;
    // printf("Enter the value of length of rectangle  :  ");
    // scanf("%f", &length);

    // printf("Enter the value of bredth of rectangle  :  ");
    // scanf("%f", &breadth);

    // printf("The area of rectangle is  :  %f\n", length * breadth);

    // // celcius to farenheit
    // float celcius;
    // printf("Enter the value of celcius  :  ");
    // scanf("%f", &celcius);

    // float far = celcius * 9 / 5 + 32;

    // printf("The value of celcius in farenheit is :  %f\n", far);

    // // simple interest
    // float principal, rate, time;
    // printf("Enter the value of principal  :  ");
    // scanf("%f", &principal);
    // printf("Enter the value of rate  :  ");
    // scanf("%f", &rate);
    // printf("Enter the value of time  :  ");
    // scanf("%f", &time);

    // float simpleInterest = (principal * rate * time) / 100;
    // printf("The value of simple interest is :  %f", simpleInterest);

    // tricky question - 2
    // int a = 10;
    // if (a = 11)
    // {
    //     printf("I am 11\n");
    // }
    // else
    // {
    //     printf("I am not 11\n");
    // }

    // to check pass or fail
    // int maths, physics, chemistry;
    // printf("Enter marks of Maths  :  ");
    // scanf("%d", &maths);
    // printf("Enter marks of Physics  :  ");
    // scanf("%d", &physics);
    // printf("Enter marks of Chemistry  :  ");
    // scanf("%d", &chemistry);

    // if (maths > 33 && physics > 33 && chemistry > 33 && (maths + physics + chemistry) / 3 > 40)
    // {
    //     printf("You are passed\n");
    // }
    // else
    // {
    //     printf("You are not passed\n");
    // }

    // to find greatest of four numbers
    // int a, b, c, d;
    // printf("Enter four numbers : ");
    // scanf("%d %d %d %d", &a, &b, &c, &d);

    // if (a > b && a > c && a > d)
    // {
    //     printf("%d is the greatest number ", a);
    // }

    // if (b > a && b > c && b > d)
    // {
    //     printf("%d is the greatest number ", b);
    // }

    // if (c > b && c > a && c > d)
    // {
    //     printf("%d is the greatest number ", c);
    // }

    // if (d > b && d > c && d > a)
    // {
    //     printf("%d is the greatest number ", d);
    // }

    // entered character is upper case or lower case
    // char ch;
    // printf("Enter your character  :  ");
    // scanf("%c", &ch);

    // if (ch > 'a' && ch < 'z')
    // {
    //     printf("Entered character is lower case\n");
    // }

    // else if (ch > 'A' && ch < 'Z')
    // {
    //     printf("Entered character is upper case\n");
    // }

    // else
    // {
    //     printf("Entered value is not a character\n");
    // }

    // to find leap year or not
    // int year;
    // printf("Enter your year  :  ");
    // scanf("%d", &year);

    // if (year % 4 != 0)
    // {
    //     printf("THis is not a leap year\n");
    // }

    // else if (year % 4 == 0)
    // {
    //     if (year % 100 == 0)
    //     {
    //         if (year % 400 == 0)
    //         {
    //             printf("This is a leap year\n");
    //         }
    //         else
    //         {
    //             printf("This is not a leap year\n");
    //         }
    //     }
    //     else
    //     {
    //         printf("This is a leap year\n");
    //     }
    // }

    // tricky question - 3
    int a = 3;
    printf("%d %d %d", a, ++a, a++);

    return 0;
}