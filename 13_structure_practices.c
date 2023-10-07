#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} vector;

typedef struct complex
{
    int real;
    int img;
} complex;

typedef struct date
{
    int day;
    int month;
    int year;
} date;

typedef struct time
{
    int hrs;
    int min;
    int sec;
} time;

void vectorSum(vector *sum, vector v1, vector v2);

vector vectorsum(vector v1, vector v2);

void scanComplex(complex *comp, int n);

void printComplex(complex comp[], int n);

void datecmp(date d1, date d2);

void timecmp(time t1, time t2);

void Datecmp(date d1, date d2);

int main()
{
    // Vectors
    vector v1;
    v1.x = 12;
    v1.y = 9;

    vector v2;
    v2.x = 34;
    v2.y = 26;

    vector result;
    // vectorSum(&result, v1,v2);
    result = vectorsum(v1, v2);
    printf("The value of x is %d and y is %d\n", result.x, result.y);

    // Complex Numbers
    complex c1;
    c1.real = 25;
    c1.img = 13;
    printf("Real part is %d and imaginary part is %d\n", c1.real, c1.img);

    complex carray[3];

    //scanComplex(carray, 3);

    //printComplex(carray, 3);

    // Date

    date d1 = {12, 9, 2010};

    date d2 = {12, , 2010};

    printf("Date is  : %d/%d/%d\n", d1.day, d1.month, d1.year);
    printf("Date is  : %d/%d/%d\n", d2.day, d2.month, d2.year);

    // datecmp(d1,d2);
    Datecmp(d1, d2);

    // Time
    time t1 = {11, 23, 55};
    time t2 = {7, 34, 28};

    printf("Time is  : %d:%d:%d\n", t1.hrs, t1.min, t1.sec);
    printf("Time is  : %d:%d:%d\n", t2.hrs, t2.min, t2.sec);

    timecmp(t1, t2);

    return 0;
}

void vectorSum(vector *sum, vector v1, vector v2)
{
    sum->x = v1.x + v2.x;
    sum->y = v1.y + v2.y;
}

vector vectorsum(vector v1, vector v2)
{
    vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    return sum;
}

void scanComplex(complex *comp, int n)
{
    int real, img;
    for (int i = 0; i < n; i++, comp++)
    {
        printf("\n*****************************\n");
        printf("Complex Number %d\n", i + 1);
        printf("*******************************\n");
        printf("Enter real part of complex number  :  ");
        scanf("%d", &real);
        printf("Enter imaginary part of complex number  :  ");
        scanf("%d", &img);

        comp->real = real;
        comp->img = img;
    }
}

void printComplex(complex comp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n*****************************\n");
        printf("Complex Number %d\n", i + 1);
        printf("*******************************\n");
        printf("Real part of complex number  :  %d\n", comp[i].real);
        printf("Imaginary part of complex number  :  %d\n", comp[i].img);
    }
}

void datecmp(date d1, date d2)
{
    int count = 0;
    if (d1.year > d2.year)
    {
        count = 1;
    }
    else if (d2.year > d1.year)
    {
        count = -1;
    }
    else if (d1.month > d2.month)
    {
        count = 1;
    }
    else if (d2.month > d1.month)
    {
        count = -1;
    }
    else if (d1.day > d2.day)
    {
        count = 1;
    }
    else if (d2.day > d1.day)
    {
        count = -1;
    }

    if (count == 0)
    {
        printf("Dates are same\n");
    }
    if (count == 1)
    {
        printf("Fisrt date is greater than second one\n");
    }
    if (count == -1)
    {
        printf("Fisrt date is smaller than second one\n");
    }
}

void timecmp(time t1, time t2)
{
    int count = 0;
    if (t1.hrs > t2.hrs)
    {
        count = 1;
    }
    else if (t2.hrs > t1.hrs)
    {
        count = -1;
    }
    else if (t1.min > t2.min)
    {
        count = 1;
    }
    else if (t2.min > t1.min)
    {
        count = -1;
    }
    else if (t1.sec > t2.sec)
    {
        count = 1;
    }
    else if (t2.sec > t1.sec)
    {
        count = -1;
    }

    if (count == 0)
    {
        printf("Times are same\n");
    }
    if (count == 1)
    {
        printf("Fisrt time is greater than second one\n");
    }
    if (count == -1)
    {
        printf("First time is smaller than second one\n");
    }
}

void Datecmp(date d1, date d2)
{
    int count = 0;
    if (d1.year > d2.year)
    {
        count = 1;
    }
    else if (d1.year == d2.year)
    {
        if (d1.month > d2.month)
        {
            count = 1;
        }
        else if (d1.month == d2.month)
        {
            if (d1.day > d2.day)
            {
                count = 1;
            }
            else if (d1.day == d2.day)
            {
                count = 0;
            }
            else if (d2.day > d1.day)
            {
                count = -1;
            }
        }
        else if (d2.month > d1.month)
        {
            count = -1;
        }
    }
    else if (d2.year > d1.year)
    {
        count = -1;
    }

    if (count == 0)
    {
        printf("Dates are same\n");
    }
    if (count == 1)
    {
        printf("Fisrt date is greater than second one\n");
    }
    if (count == -1)
    {
        printf("Fisrt date is smaller than second one\n");
    }
}