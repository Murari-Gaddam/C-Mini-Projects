// Finding leap year with conditional operator
// Author:G.Murari Date:19/06/2025
#include <stdio.h>
int main()
{
    int year;
    printf("enter a year ");
    scanf("%d", &year);
    (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
     printf("it is a leap year") : printf("it is not a leap year");
}