#include<stdio.h>
#include<math.h>

float f(float x){
    return ((x*x*x) - x - 0.1);
}

int main()
{
    int i;
    float a, b, x;

    for(i=0; ; i++){
        if(f(i) * f(i+1) < 0){
            break;
        }
    }
    a = i;
    b = i+1;
    do{
        x = a;
        a = a - (f(a)*(a-b))/(f(a)-f(b));
    } while(fabs(a-x) > 0.00001);

    printf("Required root is: %f", a);

    return 0;
}