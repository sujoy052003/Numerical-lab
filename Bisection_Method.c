#include<stdio.h>
#include<math.h>

float f(float x){
    return ((x*x*x) - x - 0.1);
}

int main()
{
    int i;
    float a, b, c;

    for(i=0; ; i++){
        if(f(i) * f(i+1) < 0){
            break;
        }
    }
    a = i;
    b = i+1;
    do{
        c = (a + b)/2;
        if(f(a)*f(b) < 0){
            b = c;
        }
        else{
            a = c;
        }
    } while(fabs(a-b) > 0.00001);

    printf("Required root is: %f", c);

    return 0;
}