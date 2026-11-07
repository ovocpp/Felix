#include <stdio.h>

int main(void) {
    long long a, b;
    char op;

    scanf("%lld %lld %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%lld\n", a + b);
            break;

        case '-':
            printf("%lld\n", a - b);
            break;

        case '*':
            printf("%lld\n", a * b);
            break;

        case '/':
            if (b == 0) {
                printf("error\n");
            } else if (a % b == 0) {
                printf("%lld\n", a / b);
            } else {
                printf("%.2f\n", (double)a / b);
            }
            break;
    }

    return 0;
}