#include <stdio.h>

int main() {
    float x, y, x0, x1, y0, y1;
    float part1, part2, result;

    // Введення значень
    printf("Введіть x: ");
    scanf("%f", &x);
    printf("Введіть y: ");
    scanf("%f", &y);
    printf("Введіть x0: ");
    scanf("%f", &x0);
    printf("Введіть x1: ");
    scanf("%f", &x1);
    printf("Введіть y0: ");
    scanf("%f", &y0);
    printf("Введіть y1: ");
    scanf("%f", &y1);

    // Перевірка на ділення на нуль
    if (x1 == x0) {
        printf("Помилка: x1 - x0 = 0. Ділення на нуль!\n");
        return 1;
    }

    if (y1 == y0) {
        printf("Помилка: y1 - y0 = 0. Ділення на нуль!\n");
        return 1;
    }

    // Обчислення
    part1 = (x - x0) / (x1 - x0);
    part2 = (y - y0) / (y1 - y0);
    result = part1 - part2;

    // Виведення результату
    printf("Результат: %f\n", result);

    return 0;
}
