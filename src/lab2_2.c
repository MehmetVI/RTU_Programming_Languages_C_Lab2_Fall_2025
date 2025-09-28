#include <stdio.h>

long long factorial(int n) {
    long long f = 1;
    for (int i = 2; i <= n; ++i) {
        f *= (long long)i;
    }
    return f;
}

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1) {
        puts("error");
        return 0;
    }

    if (n < 0) {
        puts("error");
        return 0;
    }

    printf("%lld\n", factorial(n));
    return 0;
}
