#include <stdio.h>
int main(void){
    double x, y;
    scanf("%lf", &x);
    if ((x > 2 && x <= 12) || (x > 22 && x < 32)) {
        y = -9 * x * x * x + 5 * x * x;
        printf("y = %lf\n", y);
    } else if (x <= 0) {
        y = -(x*x) - 12;
        printf("y = %lf\n", y);
    } else {
        printf("Function not defined\n"); }
    return 0;}