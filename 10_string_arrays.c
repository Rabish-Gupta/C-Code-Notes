#include <stdio.h>
#include <string.h>

void printString(char str[]);

void scanString(char str[]);

int main()
{

    // // initialising string array
    // char str1[] = {'R', 'a', 'b', 'i', 's', 'h', '\0'};
    // char str2[] = "Sriyush is a good boy.";
    // char *arr1 = "Pratyush is a good boy.";

    // // printing string array
    // printString(str1);
    // printf("\n");
    // printString(str2);
    // printf("\n");
    // printString(arr1);

    // int str3[20];
    // printf("Enter your name :  ");
    // scanf("%s", str3);
    // printf("Your name is %s\n", str3);

    // fflush(stdin);

    // char str4[20];
    // printf("Enter your full name  :  ");
    // gets(str4);
    // // fgets(str4, 20, stdin);
    // printf("Your full name is : ");
    // puts(str4);

    // char str5[30];
    // scanString(str5);
    // printString(str5);

    // // String functions

    // // strlen()
    // char str1[20] = "Rabish";
    // printf("The length of entered string is %d\n", strlen(str1));

    // // strcpy()
    // char str2[20] = "Pratyush";
    // strcpy(str1, str2);
    // printf("The value of str1 is : %s\n", str1);

    // // strcat()
    // char str3[20] = " Gupta";
    // strcat(str1, str3);
    // printf("Now str1 is : %s\n", str1);

    // // strcmp()
    // printf("Comparing str2 with str3 :  %d", strcmp(str1, str2));

    return 0;
}

void printString(char str[])
{
    printf("Your string is : ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
}

void scanString(char str[])
{
    char c = 'r';
    int i;
    printf("Enter your string  :  ");
    for (i = 0; c != '\n'; i++)
    {
        scanf("%c", &c);
        str[i] = c;
    }
    str[i - 1] = '\0';
}