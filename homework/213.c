#include <stdio.h>

int main(void) {
    int m, n, a, b, t;

    scanf("%d%d", &m, &n);

    a = m;
    b = n;

    while (b != 0) {
        t = a % b;
        a = b;
        b = t;
    }

    if (a == 1)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}