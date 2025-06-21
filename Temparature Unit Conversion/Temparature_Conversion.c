// temparature unit convertion 
// Author:G.Murari Date:19/05/2025
#include <stdio.h>

int main() {
    float f,c,k;
    printf("Enter the  temparature in farenhiet: ");
    scanf("%f", &f);
    c=(f-32)*((float)5/9);
    k=c+273;
    printf("the temparature in farenhiet is %.2f°F\n",f);
    printf("the temparature in celsius is %.2f°C\n",c);
    printf("the temparature in kelvin is %.2fK\n",k);
    return 0;
}