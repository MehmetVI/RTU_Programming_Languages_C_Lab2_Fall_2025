#include <stdio.h>

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1) {
        puts("error");
        return 0;
    }

    if (n < 1) {
        puts("error");
        return 0;
    }

    printf("%d\n", sum_to_n(n));
    return 0;
}
