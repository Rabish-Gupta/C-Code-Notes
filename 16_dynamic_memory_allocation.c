#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int num;
    // printf("How many subject you have ?  ");
    // scanf("%d",&num);

    // int * ptr;
    // ptr = (int *) malloc(num*sizeof(int));
    // for(int i = 0; i < num; i++){
    // printf("Enter marks in subject %d   :  ", i+1);
    // scanf("%d", &ptr[i]);

    //}

    // for(int i = 0; i < num; i++){
    // printf("Marks in subject %d is  :  %d\n",i+1,ptr[i]);
    // }
    // free(ptr);

    // int * ptr1;
    // ptr1 = (int *) calloc(5,sizeof(int));

    // for(int i = 0; i <5; i++){
    // printf("The value of number %d is  :   %d\n", i+1,ptr1[i]);
    // }

    // free(ptr1);

    int *ptr2;
    ptr2 = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter age of person %d  :  ", i + 1);
        scanf("%d", &ptr2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Age of person %d is  :  %d\n", i + 1, ptr2[i]);
    }

    printf("\nAfter reallocating ptr2 to store 7 integers   \n\n");

    ptr2 = (int *)realloc(ptr2, 7 * sizeof(int));

    for (int i = 0; i < 7; i++)
    {
        printf("Enter age of person %d  :  ", i + 1);
        scanf("%d", &ptr2[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        printf("Age of person %d is  :  %d\n", i + 1, ptr2[i]);
    }

    free(ptr2);

    return 0;
}