#include <stdio.h>

int main(void) {
    int n, a, b;

    scanf("%d", &n);

    for (a = 1; a <= 9; ++a) {
        for (b = a + 1; b <= 9; ++b) {
            int ab = 10 * a + b;
            int ba = 10 * b + a;

            if (ab * ba == n) {
                printf("%d%d\n", a, b);
                return 0;
            }
        }
    }

    printf("No\n");
    return 0;
}