#include <stdio.h>

int main(void) {
    int n, k, i;

    scanf("%d", &n);

    for (k = 1; k <= n; ++k) {
        for (i = 0; i < n - k; ++i)
            putchar(' ');

        for (i = 0; i < k; ++i)
            putchar('A' + i);

        for (i = k - 2; i >= 0; --i)
            putchar('A' + i);

        putchar('\n');
    }

    /* 下半部分 */
    for (k = n - 1; k >= 1; --k) {
        for (i = 0; i < n - k; ++i)
            putchar(' ');

        for (i = 0; i < k; ++i)
            putchar('A' + i);

        for (i = k - 2; i >= 0; --i)
            putchar('A' + i);

        putchar('\n');
    }

    return 0;
}