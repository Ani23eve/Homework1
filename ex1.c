#include <stdio.h>

#include <math.h>

int main(){
    double cm, kg, BMI;
    printf("Enter kilograms: \n");
    scanf("%lf", &kg);
    printf("Enter cm: \n");
    scanf("%lf", &cm);
    BMI=kg/(cm*cm);
    printf("Your BMI is: %lf\n", BMI);

    double NBMI;
    NBMI=1.3*kg/pow(cm, 2.5);
    printf("Your new BMI is :%lf\n", NBMI);

    return 0;
}