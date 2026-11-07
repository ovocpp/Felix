#include <stdio.h>

int main(void) {
    double e, sum = 1.0, term = 1.0;
    double pi = 2.0, oldpi, diff;
    int n = 1;

    scanf("%lf", &e);

    for (;;) {
        oldpi = pi;
        ++n;

        /* 第 n 项：上一项 * (n-1)/(2n-1) */
        term *= (double)(n - 1) / (2 * n - 1);
        sum += term;
        pi = 2.0 * sum;

        diff = pi - oldpi;
        if (diff < 0) diff = -diff;

        if (diff < e)
            break;
    }

    printf("%d %.7f\n", n, pi);
    return 0;
}