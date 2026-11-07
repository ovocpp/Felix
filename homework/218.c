#include <stdio.h>

void print_part(int start, int end, int *first) {
    if (!*first)
        putchar(',');

    if (start == end)
        printf("%d", start);
    else
        printf("%d-%d", start, end);

    *first = 0;
}

int main(void) {
    int x, start, prev;
    int first = 1;

    if (scanf("%d", &x) != 1 || x == -1)
        return 0;

    start = prev = x;

    while (scanf("%d", &x) == 1 && x != -1) {
        if (x == prev + 1) {
            prev = x;
        } else if (x != prev) {
            print_part(start, prev, &first);
            start = prev = x;
        }
    }

    print_part(start, prev, &first);
    putchar('\n');

    return 0;
}