#include<stdio.h>

float f(float x){
    return (1/(1 + (x*x)));
}

int main()
{
    int i, n;
    float a, b, h, evensum=0, oddsum=0, formula;

    printf("Enter the lower limit:\n");
    scanf("%f", &a);
    printf("Enter the upper limit:\n");
    scanf("%f", &b);
    printf("Enter the value of subintervals:\n");
    scanf("%d", &n);

    h = (b - a)/n;
    for(i=1; i<n; i++){
        if(i%2 == 0){
            evensum = evensum + f(a + (i*h));
        }
        else{
            oddsum = oddsum + f(a + (i*h));
        }
    }
    formula = (h/3) * (f(a) + f(b) + (2*evensum) + (4*oddsum));

    printf("Result is: %f", formula);

    return 0;
}