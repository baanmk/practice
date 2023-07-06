#include <stdio.h>
#include <math.h>

// Функція для обчислення довжини вектора
double vectorLength(int x1, int y1, int x2, int y2) {
    // Розрахунок різниці координат по осях
    int dx = x2 - x1;
    int dy = y2 - y1;
    
    // Обчислення довжини вектора за формулою відстані між двома точками
    double length = sqrt(dx*dx + dy*dy);
    
    return length;
}

int main() {
    int x1, y1, x2, y2;
    
    // Ввід координат точок початку і кінця вектора
    printf("Введіть координати точки початку вектора (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Введіть координати точки кінця вектора (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Обчислення довжини вектора
    double length = vectorLength(x1, y1, x2, y2);
    
    // Вивід результату з точністю до шести знаків після коми
    printf("Довжина вектора: %.6f\n", length);

    return 0;
}
