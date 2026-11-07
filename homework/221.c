#include <stdio.h>

int main(void) {
    long long n, rev = 0;
    int negative = 0;

    scanf("%lld", &n);

    if (n < 0) {
        negative = 1;
        n = -n;
    }

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (negative)
        rev = -rev;

    printf("%lld\n", rev);
    return 0;
}