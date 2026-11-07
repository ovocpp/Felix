#include <stdio.h>

int main(void) {
    int n, m, i;
    double h, total;

    scanf("%d%d", &n, &m);

    h = (double)n;
    total = (double)n;

    for (i = 2; i <= m; ++i) {
        h /= 4.0;
        total += 2.0 * h;
    }

    printf("%.2f\n", total);
    printf("%.2f\n", h / 4.0);

    return 0;
}