#include <stdio.h>


int unlucky(int x) {
    int prev = -1; 

    while (x > 0) {
        int d = x % 10;

        if (d == 4) return 1;
        if (prev == 2 && d == 6) return 1; 

        prev = d;
        x /= 10;
    }
    return 0;
}

int main(void) {
    int m, n, i, ans = 0;

    scanf("%d%d", &m, &n);

    for (i = m; i <= n; ++i) {
        if (!unlucky(i)) {
            ++ans;
        }
    }

    printf("%d\n", ans);

    return 0;
}