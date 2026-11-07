#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m, k, a, d, x, found = 0;
    long long *sum;

    scanf("%d%d", &m, &k);

    sum = (long long *)calloc((size_t)k + 1, sizeof(long long));
    if (sum == NULL) return 0;

    /* sum[i] 表示 i 的所有真因子之和 */
    for (d = 1; d <= k / 2; ++d) {
        for (x = d * 2; x <= k; x += d) {
            sum[x] += d;
        }
    }

    for (a = m; a <= k; ++a) {
        long long b = sum[a];

        /* 只输出一次，保证小数在前 */
        if (b > a && b <= k && sum[b] == a) {
            printf("%d-%d\n", a, (int)b);
            found = 1;
        }
    }

    if (!found) {
        printf("None\n");
    }

    free(sum);
    return 0;
}