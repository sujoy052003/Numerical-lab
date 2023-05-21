#include<stdio.h>

float f(float x,float y){
    return ((y-x)/(y+x));
}
int main()
{
    float x0, y0, h, x;

    printf("Enter the value of x0:\n");
    scanf("%f", &x0);
    printf("Enter the value of y0:\n");
    scanf("%f", &y0);
    printf("Enter the value of h:\n");
    scanf("%f", &h);
    printf("Enter the value of xn:\n");
    scanf("%f", &x);

    while(x0 < x){
        y0 = y0 + h*f(x0, y0);
        x0 = x0 + h;
    }

    printf("Result is: %f", y0);

    return 0;
}