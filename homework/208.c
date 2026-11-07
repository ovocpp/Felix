#include <stdio.h>

int main(void) {
    int a, n, i;
    long long term = 0, sum = 0;

    scanf("%d%d", &a, &n);

    for (i = 1; i <= n; ++i) {
        term = term * 10 + a;   /* 2 -> 22 -> 222 ... */
        sum += term;            /* 累加每一项 */
    }

    printf("%lld\n", sum);
    return 0;
}