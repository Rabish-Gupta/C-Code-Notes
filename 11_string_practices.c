#include <stdio.h>

int strlen(char str[]);

void slice(char str[], int m, int n);

void Strcpy(char str[], char strcpy[]);

void encrypt(char str[]);

void decrypt(char str[]);

int occur(char str[], char c);

void occurenceCheck(char str[], char c);

int main()
{
    // char name[20] = "Rabish Gupta";
    // printf("The length of name is : %d\n", strlen(name));

    // slice(name, 2, 10);
    // printf("Sliced name[2:10] is :  %s\n", name);

    char str1[20] = "Rabish";
    // char str2[20] = "Sriyush";
    // Strcpy(str1, str2);
    // printf("THe new value of str1 is  :  ");
    // puts(str1);

    // encrypt(str1);
    // printf("The encrypted value of str1 is :  %s\n", str1);

    // char str3[20] = "Rbdlwm";
    // decrypt(str3);
    // printf("The decrypted value of str3 is  :  %s\n", str3);

    // char c = 'a';
    // printf("The number of occurence of 'R' in \"Rabish\" is : %d\n", occur(str1, c));

    // occurenceCheck(str1, c);

    return 0;
}

int strlen(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void slice(char str[], int m, int n)
{
    int i;
    for (i = 0; m != n; i++, m++)
    {
        str[i] = str[m];
    }
    str[i] = '\0';
}

// void slice(char str[], int m, int n)
// {
//     int i;
//     for (i = 0; (i + m) < n; i++)
//     {
//         str[i] = str[i + m];
//     }
//     str[i] = '\0';
// }

void Strcpy(char str[], char strcpy[])
{
    for (int i = 0; strcpy[i] != '\0'; i++)
    {
        str[i] = strcpy[i];
    }
}

void encrypt(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] + i;
    }
}

void decrypt(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] - i;
    }
}

int occur(char str[], char c)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            count++;
        }
        return count;
    }
}

void occurenceCheck(char str[], char c)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("Character is not present in the string\n");
    }
    else
    {
        printf("Character is present in the string\n");
    }
}