#include <stdio.h>

// void printArray(int arr[], int n);

void printArray(int *arr, int n);

// void scanArray(int arr[], int n);

void scanArray(int *arr, int n);

void printArrayTwo(int *arr, int m, int n);

void scanArrayTwo(int *arr, int m, int n);

int main()
{
    // // array declaration and initialisation

    // // method - 1
    // int arr1[3] = {34, 56, 78};

    // // method - 2
    // int arr2[3];
    // arr2[0] = 34;
    // arr2[1] = 45;
    // arr2[2] = 98;

    // // method - 3
    // int arr3[3];
    // printf("Enter the value of number 1  :  ");
    // // scanf("%d", &arr3[0]);
    // scanf("%d", arr3);

    // printf("Enter the value of number 2  :  ");
    // // scanf("%d", &arr3[1]);
    // scanf("%d", arr3 + 1);

    // printf("Enter the value of number 3  :  ");
    // // scanf("%d", &arr3[2]);
    // scanf("%d", arr3 + 2);

    // // printf("Numbers are %d %d and %d\n", arr3[0], arr3[1], arr3[2]);
    // printf("Numbers are %d %d and %d\n", *(arr3), *(arr3 + 1), *(arr3 + 2));

    // // method - 4
    // int marks[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter marks in subject %d  :  ", i + 1);
    //     // scanf("%d",(marks + i));
    //     scanf("%d", &marks[i]);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     // printf("The marks in subject %d is %d",i+1, marks[i]);
    //     printf("The marks in subject %d is : %d\n", i + 1, *(marks + i));
    // }

    // // method - 5
    // int arr5[5];

    // scanArray(arr5, 5);

    // printArray(arr5, 5);

    // // 2d arrays declaration and initilisation
    // int arr6[5][2];

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("Enter marks of student %d in subject %d : ", i + 1, j + 1);
    //         scanf("%d", &arr6[i][j]);
    //     }
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("The marks of student %d in subject %d is : %d\n", i + 1, j + 1, arr6[i][j]);
    //     }
    // }

    // scanArrayTwo(arr6[0], 1, 2);
    // scanArrayTwo(arr6[1], 2, 2);
    // scanArrayTwo(arr6[2], 3, 2);
    // scanArrayTwo(arr6[3], 4, 2);
    // scanArrayTwo(arr6[4], 5, 2);

    // printArrayTwo(arr6[0], 1, 2);
    // printArrayTwo(arr6[1], 2, 2);
    // printArrayTwo(arr6[2], 3, 2);
    // printArrayTwo(arr6[3], 4, 2);
    // printArrayTwo(arr6[4], 5, 2);

    return 0;
}

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         // printf("The marks in subject %d is %d",i+1, arr[i]);
//         printf("The marks in subject %d is : %d\n", i + 1, *(arr + i));
//     }
// }

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        // printf("The marks in subject %d is %d",i+1, arr[i]);
        printf("The marks in subject %d is : %d\n", i + 1, *(arr + i));
    }
}

// void scanArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter marks in subject %d  :  ", i + 1);
//         // scanf("%d",(arr + i));
//         scanf("%d", &arr[i]);
//     }
// }

void scanArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter marks in subject %d  :  ", i + 1);
        // scanf("%d",(arr + i));
        scanf("%d", &arr[i]);
    }
}

void printArrayTwo(int *arr, int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The marks of student %d in subject %d is : %d\n", m, i + 1, arr[i]);
    }
}

void scanArrayTwo(int *arr, int m, int n)
{
    for (int i = 0; i < n; i++)
    {

        printf("Enter marks of student %d in subject %d : ", m, i + 1);
        scanf("%d", &arr[i]);
    }
}
