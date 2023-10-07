#include <stdio.h>

int main()
{
    FILE *fptr;

    //fptr = fopen("table.txt", "w");

    //int n;
    //printf("Enter your number  :  ");
    //scanf("%d", &n);

    //fprintf(fptr, "\n**********************\n");
    //fprintf(fptr, "Table of Number %d\n", n);
    //fprintf(fptr, "**********************\n\n");

    //for (int i = 0; i < 10; i++)
    //{
    //    fprintf(fptr, "%d * %d = %d\n", n, i + 1, n * (i + 1));
    //}

    //fclose(fptr);

    //fptr = fopen("write.txt", "r");
    //FILE *ptr;
    //ptr = fopen("double.txt", "w");

    //char c;
    //char end = EOF;
    //c = fgetc(fptr);

    //while (c != end)
    //{
    //    putc(c, ptr);
    //    putc(c, ptr);
    //   c = getc(fptr);
    //}

    //fclose(fptr);
    //fclose(ptr);

    //fptr = fopen("employee.txt", "w");

    //char name1[20];
    //int salary1;

    //printf("Enter the name of employee  :  ");
    //gets(name1);
    //printf("Enter salary of employee  :  ");
    //scanf("%d", &salary1);

    //char name2[20];
    //int salary2;

    //printf("Enter the name of employee  :  ");
    //gets(name2);
    //printf("Enter salary of employee  :  ");
    //scanf("%d", &salary2);

    //fprintf(fptr, "%s, %d\n", name1, salary1);
    //fprintf(fptr, "%s, %d\n", name2, salary2);

    //fclose(fptr);

    fptr = fopen("file.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);
    fclose(fptr);

    fptr = fopen("file.txt", "w");
    fprintf(fptr, "%d", 2 * num);
    fclose(fptr);

    return 0;
}