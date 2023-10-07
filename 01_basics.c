#include <stdio.h>

// declaring function
float sum(float a, float b);

int main()
{

    // variales declaration and initialisation
    int age = 45;
    int score = 67;
    float price = 56.67;
    char star = '*';

    // displaying variables
    printf("Age  :  %d\n", age);
    printf("Score  :  %d\n", score);
    printf("Price  :  %f\n", price);
    printf("Star  :  %c\n", star);

    // taking input from the user
    int marks;
    printf("Enter your marks  :  ");
    scanf("%d", &marks);

    // if-else conditional statements
    if (marks > 90)
    {
        printf("Grade A+\n");
    }
    else if (marks > 80 && marks < 90)
    {
        printf("Grade A\n");
    }
    else if (marks > 70 && marks < 80)
    {
        printf("Grade B\n");
    }
    else if (marks > 60 && marks < 70)
    {
        printf("Grade C\n");
    }
    else if (marks > 50 && marks < 60)
    {
        printf("Grade D\n");
    }
    else if (marks > 40 && marks < 50)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Sorry, You failed!");
    }

    // ternary operator
    marks > 90 ? printf("You are topper\n") : printf("You are not topper\n");

    // switch control statements
    int Score;
    printf("Enter your score :  ");
    scanf("%d", &Score);

    switch (Score)
    {
    case 10:
        printf("You are pro player.");
        break;
    case 9:
        printf("You are pro player.");
        break;
    case 8:
        printf("You are good player.");
        break;
    case 7:
        printf("You are good player.");
        break;
    case 6:
        printf("You are a player.");
        break;
    case 5:
        printf("You are a player.");
        break;
    case 4:
        printf("You are noob player.");
        break;
    case 3:
        printf("You are noob player.");
        break;
    default:
        printf("You are nothing.");
    }

    // calling function
    printf("6 +7  :  %f\n", sum(6, 17));

    return 0;
}

// defining function
float sum(float a, float b)
{
    return a + b;
}