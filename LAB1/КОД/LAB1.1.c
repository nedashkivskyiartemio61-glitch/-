#include <stdio.h>
int main(void){
    double x, y;
    scanf("%lf", &x);
    if (x <= 0) {
        y = -(x*x) - 12;
        printf("y = %lf\n", y);
    } else if (x <= 2) {
        printf("Function not defined\n");
    } else if (x <= 12) {
        y = -9 * x * x * x + 5 * x * x;
        printf("y = %lf\n", y);
    } else if (x <= 22) {
        printf("Function not defined\n");
    } else if (x < 32) {
        y = -9 * x * x * x + 5 * x * x;
        printf("y = %lf\n", y);
    } else {
        printf("Function not defined\n");
    }
    return 0;
    }