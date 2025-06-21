// Aggragate marks and Aotal percentage
// Author:G.Murari Date:19/05/2025
#include <stdio.h>

int main() {
    float m,e,p,c,f,sum,per;
    printf("Enter the marks obtained in maths: ");
    scanf("%f", &m);
    printf("Enter the marks obtained in physics: ");
    scanf("%f", &p);
    printf("Enter the marks obtained in chemistry: ");
    scanf("%f", &c);
    printf("Enter the marks obtained in french: ");
    scanf("%f", &f);
    printf("Enter the marks obtained in english: ");
    scanf("%f", &e);
    sum=m+p+c+e+f;per=(float)sum/5;
    printf("aggragate marks(out of 500)=%f\npercentage=%f",sum,per);

    return 0;
}
