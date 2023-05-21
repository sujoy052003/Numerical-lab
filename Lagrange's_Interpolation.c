#include<stdio.h>

int main()
{
    int i, j, n;
    float x[10], y[10], a, sum=0, p;

    printf("Enter number of data: ");
    scanf("%d", &n);
    printf("Enter data from the given table:\n");
    for(i=0; i<n; i++){
        scanf("%f", x[i]);
        scanf("%f", y[i]);
    }
    printf("\nEnter the interpolating point: ");
    scanf("%f", &a);

    for(i=0; i<n; i++){
        p=1;
        for(j=0; j<n; j++){
            if(i != j){
                p = p * ((a - x[i])/(x[i]-x[j]));
            }
        }
        sum = sum + (p * y[i]);
    }

    printf("Result is: %f", sum);

    return 0;
}