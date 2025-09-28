#include <stdio.h>

int is_prime(int x) {
    if (x < 2) return 0;
    if (x == 2 || x == 3) return 1;
    if (x % 2 == 0) return 0;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1) {
        puts("error");
        return 0;
    }

    if (n < 2) {
        puts("error");
        return 0;
    }

    int first = 1;
    for (int k = 2; k <= n; ++k) {
        if (is_prime(k)) {
            if (!first) putchar(' ');
            printf("%d", k);
            first = 0;
        }
    }
    putchar('\n');
    return 0;
}
