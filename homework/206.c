#include <stdio.h>

int main(void) {
    long long a, n, p;
    int first = 1;

    scanf("%lld", &a);
    n = a;

    printf("%lld=", a);

    for (p = 2; p <= n / p; ++p) {
        while (n % p == 0) {
            if (!first) putchar('*');
            printf("%lld", p);
            first = 0;
            n /= p;
        }
    }

    if (n > 1) {
        if (!first) putchar('*');
        printf("%lld", n);
        first = 0;
    }

    if (first) {
        printf("%lld", a);
    }

    putchar('\n');
    return 0;
}