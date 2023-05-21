#include<stdio.h>

int main()
{
    int i, j,n;
    float x[10], y[10][10], h, u, a, sum=0, pro=1;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the values of x and y:\n");
    for(i=0; i<n; i++){
        scanf("%f", &x[i]);
        scanf("%f", &y[i][0]);
    }

    for(j=1; j<n; j++){
        for(i=0; i<n; i++){
            y[i][j] = y[i+1][j-1] - y[i][j-1];
        }
    }
    printf("\nEnter interpolating point: ");
    scanf("%f", &a);
    h = x[1] - x[0];
    u = (a - x[0])/h;
    for(i=1; i<n; i++){
        pro = pro * (u - i + 1)/(i);
        sum = sum + (pro * y[0][i]);
    }
    sum = sum + y[0][0];

    printf("\nResult is: %f", sum);

    return 0;
}