#include <stdio.h>

// Функція для знаходження найбільного спільного дільника 
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return findGCD(b, a % b);
}

// Функція для знаходження найменшого спільного кратного 
int findLCM(int arr[], int n) {
    int lcm = arr[0];

    for (int i = 1; i < n; i++) {
        lcm = (lcm * arr[i]) / findGCD(lcm, arr[i]);
    }

    return lcm;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lcm = findLCM(arr, n);
    printf("%d\n", lcm);

    return 0;
}
