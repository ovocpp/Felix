#include <stdio.h>

int main(void) {
    int m, n, i;
    int first = 1;

    scanf("%d%d", &m, &n);

    for (i = m; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 != 0) {
            if (!first) putchar(' ');
            printf("%d", i);
            first = 0;
        }
    }

    putchar('\n');
    return 0;
}