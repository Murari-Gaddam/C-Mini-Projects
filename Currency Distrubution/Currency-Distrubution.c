// currency distrubution
// Author:G.Murari Date:20/05/2025
#include <stdio.h>

int main()
{
    int amt, th, f, h, t, fc, oc;
    printf("Enter the amount of money(till 10,000): ");
    scanf("%d", &amt);
    th = amt / 1000;
    f = (amt % 1000) / 500;
    h = (amt % 500) / 100;
    t = (amt % 100) / 10;
    fc = (amt % 10) / 5;
    oc = amt % 5;
    printf("no of 1000Rs notes %d\n",th);
    printf("no of 500Rs notes %d\n",f);
    printf("no of 100Rs notes %d\n",h);
    printf("no of 10Rs notes %d\n",t);
    printf("no of 5Rs coin %d\n",fc);
    printf("no of 1Rs coin %d\n",oc);

         return 0;
}