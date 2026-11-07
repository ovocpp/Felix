#include <stdio.h>

int main(void) {
    long long n, i, j, sum = 0;

    scanf("%lld", &n);

    for (i = 1; i <= n / i; ++i) {
        if (n % i == 0) {
            if (i < n)
                sum += i;

            j = n / i;
            if (j != i && j < n)
                sum += j;
        }
    }

    printf("%lld\n", sum);
    return 0;
}