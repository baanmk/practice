#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    long long dp1[31];
    long long dp2[31];

    // Ініціалізуємо базові значення для чисел довжиною 1
    dp1[1] = 2;
    dp2[1] = 8;

    // Обчислюємо кількість чисел для кожної довжини від 2 до p
    for (int i = 2; i <= p; i++) {
        dp1[i] = dp2[i - 1];
        dp2[i] = (dp1[i - 1] * 2) + (dp2[i - 1] * 8);
    }

    long long total = dp1[p] + dp2[p];
    printf("%lld\n", total);

    return 0;
}
