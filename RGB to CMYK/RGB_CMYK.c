// RGB to CMYK coulour format
// Author:G.Murari Date:15/06/2025
#include <stdio.h>

int main()
{
    float r, g, b, c, m, y, k, w, gr;
    printf("Enter the red value amount from (0-255): ");
    scanf("%f", &r);
    printf("Enter the green value amount from (0-255): ");
    scanf("%f", &g);
    printf("Enter the blue value amount from (0-255): ");
    scanf("%f", &b);
    gr = (r > g) ? ((r > b) ? r : b) : ((g > b) ? g : b);
    w = gr / 255.0;
    c = (w - (r / 255.0)) / w;
    m = (w - (g / 255.0)) / w;
    y = (w - (b / 255.0)) / w;
    k = 1.0 - w;
    printf("The cyan value is %.2f\n",c);
    printf("The magenta value is %.2f\n",m);
    printf("The yellow value is %.2f\n",y);
    printf("The black value is %.2f\n",k);
    return 0;
}