#include <stdio.h>

int findEqualDivisors(int n) {
    int count = 0;
    for (int m = 1; m < n; m++) {
        int quotient = n / m;
        int remainder = n % m;
        if (quotient == remainder) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    int equalDivisors = findEqualDivisors(n);
    printf("Кількість рівних дільників числа n: %d\n", equalDivisors);

    return 0;
}
