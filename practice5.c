#include <stdio.h>

int countSequences(int n) {
    int mod = 12345;
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;
    
    // Обчислення кількості послідовностей довжиною n
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % mod;
    }
    
    return dp[n];
}

int main() {
    int n;
    
    // Ввід довжини послідовностей
    printf("Введіть довжину послідовностей n: ");
    scanf("%d", &n);

    // Обчислення кількості шуканих послідовностей
    int count = countSequences(n);
    
    // Вивід результату
    printf("Кількість шуканих послідовностей: %d\n", count);

    return 0;
}
