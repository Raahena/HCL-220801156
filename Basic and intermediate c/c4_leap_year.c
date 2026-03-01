//4. Determine if an input year is a leap year using only conditional operators.

#include <stdio.h>

int main()
{
    int year;

    scanf("%d", &year);

    ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) )
        ? printf("Leap year")
        : printf("Not a leap year");

    return 0;
}

