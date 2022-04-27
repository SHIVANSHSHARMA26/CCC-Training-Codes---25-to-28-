#include<stdio.h>

#include<math.h>

double hypotenuse(double base, double perp)

{

    double h;

    h=sqrt((base*base)+(perp*perp));

    return h;

    //complete this function

}

int main()

{

    double A, B, C;

    scanf("%lf%lf", &A, &B);

    C = hypotenuse(A, B);

    printf("%.6lf", C);

    return 0;

}
