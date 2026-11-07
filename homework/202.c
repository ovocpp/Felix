#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, r, i, d;

    if (scanf("%d", &n) != 1)
        return 0;

    for (r = 0; r < 2 * n - 1; ++r) {
        d = abs(r - (n - 1));

        for (i = 0; i < d; ++i)
            putchar(' ');

        if (r == 0 || r == 2 * n - 2) {
            for (i = 0; i < n; ++i)
                putchar('*');
        } else {
            
            putchar('*');
            for (i = 0; i < 3 * n - 4 - 2 * d; ++i)
                putchar(' ');
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}