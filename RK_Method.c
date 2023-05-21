#include<stdio.h>

float f(float x,float y){
    return ((y-x)/(y+x));
}

int main()
{
    float x0, y0, h, x, k, k1, k2, k3, k4;

    printf("Enter the value of x0:\n");
    scanf("%f", &x0);
    printf("Enter the value of y0:\n");
    scanf("%f", &y0);
    printf("Enter the value of h:\n");
    scanf("%f", &h);
    printf("Enter the value of xn:\n");
    scanf("%f", &x);

    while(x0 < x){
        k1 = h * f(x0, y0);
        k2 = h * f(x0+h/2, y0+k1/2);
        k3 = h * f(x0+h/2, y0+k2/2);
        k4 = h * f(x0+h, y0+k3);
        
        k = (k1 + (2*k2) + (2*k3) + k4)/6;

        y0  = y0 + k;
        x0 = x0 + h;
    }

    printf("Result is: %f", y0);

    return 0;
}