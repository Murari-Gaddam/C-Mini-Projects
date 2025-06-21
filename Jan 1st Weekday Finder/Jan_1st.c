// find the day on jan 1st
// Author:G.Murari Date:05/06/2025
#include <stdio.h>

int main()
{
    int year, nol, noy, n;
    printf("Enter the year: ");
    scanf("%d", &year);
    nol = (year / 4) - (year / 100) + (year / 400);
    noy = year - nol;
    n = (2 * nol) + noy;
    if (n % 7 == 1)
        printf("jan 1st %d is a monday", year);
    if (n % 7 == 2)
        printf("jan 1st %d is a tuesday", year);
    if (n % 7 == 3)
        printf("jan 1st %d is a wednesday", year);
    if (n % 7 == 4)
        printf("jan 1st %d is a thursday", year);
    if (n % 7 == 5)
        printf("jan 1st %d is a friday", year);
    if (n % 7 == 6)
        printf("jan 1st %d is a satuday", year);
    if (n % 7 == 0)
        printf("jan 1st %d is a sunday", year);

    return 0;
}