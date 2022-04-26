#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z, b;

    x = 6.251;
    y = 0.827;
    z = 25.001;
    b = 0;

    printf("Enter x: ");
    scanf("%lf", &x);
    printf("\n");
    printf("Enter y: ");
    scanf("%lf", &y);
    printf("\n");
    printf("Enter z: ");
    scanf("%lf", &z);
    printf("\n");

    printf("x = %e", x);
    printf("\n");
    printf("y = %e", y);
    printf("\n");
    printf("z = %e", z);
    printf("\n");
    printf("\n");

    b = pow(y,pow(fabs(x),(1.0/3.0))) + (pow(cos(y),3)*((fabs(x-y)*(1+(pow(sin(x),2)/sqrt(x+y))))/((x/2.0)+exp(fabs(x-y)))));

    printf("b = %e", b);
    printf("\n");


    return 0;
}
