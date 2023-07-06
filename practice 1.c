#include <stdio.h>

int main() {
    int t1, t2, t3;
    scanf("%d %d %d", &t1, &t2, &t3);

    float total_time = (t1 + t2 + t3)/3;
    printf("%.2f\n", total_time);

    return 0;
}
