#include <stdio.h>

void printFile(FILE *fptr);

void scanFile(FILE *fptr);

int main()
{
    FILE *fptr;

    // reading file

    //fptr = fopen("read.txt", "r");
    //int num1, num2, num3;

    //fscanf(fptr, "%d", &num1);
    //fscanf(fptr, "%d", &num2);
    //fscanf(fptr, "%d", &num3);

    //printf("The value of num1 is : %d\n", num1);
    //printf("The value of num2 is : %d\n", num2);
    //printf("The value of num3 is : %d\n", num3);

    //fclose(fptr);

    // writing file
    //fptr = fopen("write.txt", "w");
    //int marks = 72;
    //fprintf(fptr, "The value of marks is :  %d\n", marks);
    //fprintf(fptr, "Thanks for writing in the file!\n");

    //fclose(fptr);

    //fgetc()
    
    fptr = fopen("get.txt", "r");
    //printf("%c", fgetc(fptr));
    //printf("%c", fgetc(fptr));
    //printf("%c", fgetc(fptr));
    //printf("%c", fgetc(fptr));
    //printf("%c", fgetc(fptr));

    printFile(fptr);

    fclose(fptr);

    //putc()
    
    fptr = fopen("put.txt", "a");
    //putc('R', fptr);
    //putc('a', fptr);
    //putc('b', fptr);
    //putc('i', fptr);
    //putc('s', fptr);
    //putc('h', fptr);
    
    scanFile(fptr);

    return 0;
}

void printFile(FILE *fptr)
{
    char c;
    c = fgetc(fptr);
    char r = EOF;
    while (1)
    {
        if (c == r)
        {
            break;
        }
        printf("%c", c);
        c = fgetc(fptr);
    }
}

void scanFile(FILE *fptr)
{
    char c = fgetc(fptr);
    while (c != '#')
    {
        putc(c, fptr);
        scanf("%c", &c);
    }
}