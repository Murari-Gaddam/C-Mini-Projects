// distance between 2 points on earth
// Author:G.Murari Date:20/05/2025
#include <stdio.h>
#include <math.h>

int main() {
    float l1,l2,g1,g2,d;
    printf("Enter the latitude of place 1: ");
    scanf("%f", &l1);
    printf("Enter the latitude of place 2: ");
    scanf("%f", &l2);
    printf("Enter the longitude of place 1: ");
    scanf("%f", &g1);
    printf("Enter the longitude of place 2: ");
    scanf("%f", &g2);
    d=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2))*cos(g1-g2));
    printf("the distance between the places is %f\n",d);
    return 0;
}