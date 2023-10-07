#include <stdio.h>

void tableArray(int *arr, int n);

int main()
{
    // // table of a number
    // int tableArr[10];
    // int number;
    // printf("Enter your number  :  ");
    // scanf("%d", &number);

    // for (int i = 0; i < 10; i++)
    // {
    //     tableArr[i] = number * (i + 1);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d * %d = %d\n", number, i + 1, tableArr[i]);
    // }

    // // reversing an array
    // int arr[5] = {34, 78, 56, 26, 87};
    // for (int i = 0; i < (5 / 2); i++)
    // {
    //     int temp;
    //     temp = arr[i];
    //     arr[i] = arr[5 - i - 1];
    //     arr[5 - i - 1] = temp;
    // }

    // printf("[%d, %d, %d, %d, %d]", arr[0], arr[1], arr[2], arr[3], arr[4]);

    // // number of positive integers
    // int array[10] = {23, -67, 65, 45, -67, -45, -34, 56, 12, -90};
    // int count = 0;

    // for (int i = 0; i < 10; i++)
    // {
    //     if (array[i] < 0)
    //     {
    //         count++;
    //     }
    // }
    // printf("Total number of positive integers are %d", count);

    // // tables in array
    // int table[3][10];
    // int table1, table2, table3;
    // printf("Enter the number for table 1 : ");
    // scanf("%d", &table1);
    // printf("Enter the number for table 2 : ");
    // scanf("%d", &table2);
    // printf("Enter the number for table 3 : ");
    // scanf("%d", &table3);

    // tableArray(table[0], table1);
    // tableArray(table[1], table2);
    // tableArray(table[2], table3);

    // // 3d array
    // int arr[2][3][4];

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         for (int k = 0; k < 4; k++)
    //         {
    //             printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
    //         }
    //     }
    // }

    return 0;
}

void tableArray(int *arr, int n)
{
    printf("Multplication table of %d is : \n", n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d* %d = %d\n", n, i + 1, arr[i]);
    }

    printf("*************************************\n\n");
}