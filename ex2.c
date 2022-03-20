#include <stdio.h>
#include <math.h>

int main(){
    //подточка а:
    double r, h, S, V;
    const double PI=3.14;
    printf("Enter the radius: \n");
    scanf("%lf", &r);
    S=PI*r*r;
    printf("\nS=%.2lf\n", S);
    printf("\nEnter h: ");
    scanf("%lf", &h);
    V=S*h;
    printf("\nV=%.2lf\n", V);

    //подточка б:
    double V1, S1, length;
    S1=(acos((r-h)/r)*r*r-(r-h)*sqrt(2*r*h-h*h));
    printf("\nS1=%.2lf\n", S1);
    printf("\nEnter length: \n");
    scanf("%lf", &length);
    V1=S1*length;
    printf("\nV1=%.2lf\n", V1);

    return 0;
}