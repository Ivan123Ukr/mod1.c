#include <stdio.h>
#include <math.h>

int main() {
    // координати першої точки
    double x1 = 1.0, y1 = 1.0;
    // координати другої точки
    double x2 = 2.0, y2 = 2.0;

    // обчислення відстані
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // виведення результату
    printf("Відстань між точками: %.3f\n", distance);

    return 0;
}
