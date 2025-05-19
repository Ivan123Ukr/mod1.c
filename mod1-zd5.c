#include <stdio.h>
#include <math.h>

double f(double x) {
    if (x <= 2) {
        return x * x + 5 * x - 6;
    } else {
        return fabs(x + cos(x));
    }
}

int main() {
    double x;
    printf("Введіть значення x: ");
    scanf("%lf", &x);

    double result = f(x);
    printf("f(x) = %.4f\n", result);

    return 0;
}
