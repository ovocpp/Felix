#include <stdio.h>

int main(void) {
    int a, b, c, m;
    int r, y, g, found = 0;

    scanf("%d%d%d%d", &a, &b, &c, &m);

    for (r = 0; r <= a; r++) {
        for (y = 0; y <= b; y++) {
            g = m - r - y;
            if (g >= 0 && g <= c) {
                printf("%d-%d-%d\n", r, y, g);
                found = 1;
            }
        }
    }

    if (!found)
        printf("None\n");

    return 0;
}