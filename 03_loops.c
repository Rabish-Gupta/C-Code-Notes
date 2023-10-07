#include <stdio.h>

int main()
{
    // while loop
    int i = 0;
    while (i <= 10)
    {
        printf("%d\n", (i + 10));
        i++;
    }

    // do while
    int j = 1;
    int k = 2;

    int num;
    printf("Enter number of even of terms  :  ");
    scanf("%d", &num);

    do
    {
        printf(" The value of %dth even number is %d\n", j, k);
        k = k + 2;
        j++;
    } while (j <= num);

    // for loop
    int sum = 0;

    int number;
    printf("Enter number of terms  :  ");
    scanf("%d", &number);

    for (int l = 1; l <= number; l++)
    {
        sum = sum + l;
    }

    printf("The sum of first %d numbers is %d", number, sum);

    return 0;
}