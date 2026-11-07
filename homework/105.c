#include <stdio.h>

int main(){
    char c1, c2;
    int sum;
    scanf(" %c %c", &c1, &c2);
    sum = (c1 - '0') + (c2 - '0');
    printf("%d", sum);
    return 0;
}