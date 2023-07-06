#include <stdio.h>
#include <math.h>

// Функція для обчислення кількості точок перетину двох кола
int countIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // Обчислення відстані між центрами коліс
    double distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    // Визначення випадків перетину
    if (distance > r1 + r2) {
        // Кола не перетинаються
        return 0;
    } else if (distance == r1 + r2) {
        // Кола торкаються зовнішньо
        return 1;
    } else if (distance < fabs(r1 - r2)) {
        // Одне коло повністю знаходиться всередині іншого
        return 0;
    } else if (distance == fabs(r1 - r2)) {
        // Кола торкаються внутрішньо
        return 1;
    } else {
        // Кола мають дві точки перетину
        return 2;
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    
    // Ввід координат і радіусів двох кола
    printf("Введіть координати центра кола 1 (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Введіть радіус кола 1 (r1): ");
    scanf("%d", &r1);
    printf("Введіть координати центра кола 2 (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Введіть радіус кола 2 (r2): ");
    scanf("%d", &r2);

    // Обчислення кількості точок перетину
    int intersectionPoints = countIntersectionPoints(x1, y1, r1, x2, y2, r2);
    
    // Вивід результату
    printf("Кількість точок перетину: %d\n", intersectionPoints);

    return 0;
}
