#include <stdio.h>

int main(void) {
    long long n;

    scanf("%lld", &n);

    /* s = 1 + (1+2) + ... + (1+2+...+n)
          = n(n+1)(n+2)/6 */
    printf("%lld\n", n * (n + 1) * (n + 2) / 6);

    return 0;
}