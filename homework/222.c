#include <stdio.h>

int main(void) {
    long long x;

    scanf("%lld", &x);

    printf("%lld\n", x / 15 + x / 14 - x / 210);

    return 0;
}