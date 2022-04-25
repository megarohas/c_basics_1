#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, x, K, M, R;
    
    K = 2.68;
    M = -0.38;
    x = 3;
    a = 2.2;
    b = 3.9;
     
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("\n");
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("\n");
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("\n");
    
    printf("a = %e", a);
    printf("\n");
    printf("b = %e", b);
    printf("\n");
    printf("x = %e", x);
    printf("\n");
    printf("\n");
    
    K = sqrt(fabs(1-pow(log(x),2))) + exp(x-a);
    M = pow(((b+pow(sin(x),2))/(7*x)),1.0/3.0) - log10(x*x);
    R = pow(K,2)+pow(M,2);
    
    printf("K = %e", K);
    printf("\n");
    printf("M = %e", M);
    printf("\n");
    printf("\n");
    printf("R = %e", R);

    return 0;
}
