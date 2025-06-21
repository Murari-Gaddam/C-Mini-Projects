// BMI calculator
// Author:G.Murari Date:19/06/2025
#include <stdio.h>
#include <math.h>
int main()
{
    float kg, m, bmi;
    printf("Enter the weight of the person in kg");
    scanf("%f", &kg);
    printf("Enter the height of th person in feet");
    scanf("%f", &m);
    bmi = kg / (pow(m/3.281, 2));
    if (bmi < 15)
        printf("The person is starving");
    else if (bmi > 15.1 && bmi < 17.5)
        printf("The person is anorexic.Your bmi is %f", bmi);
    else if (bmi > 17.6 && bmi < 18.5)
        printf("The person is Underweight.Your bmi is %f", bmi);
    else if (bmi > 18.6 && bmi < 24.9)
        printf("The person is Ideal.Your bmi is %f", bmi);
    else if (bmi > 25 && bmi < 29.9)
        printf("The person is Overweight.Your bmi is %f", bmi);
    else if (bmi > 30 && bmi < 30.9)
        printf("The person is Obese.Your bmi is %f", bmi);
    else if (bmi >= 40)
        printf("The person is Morbidly Obese.Your bmi is %f", bmi);
    return 0;
}