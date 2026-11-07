#include<stdio.h>

int main(){
    int a;
    float b;
    double c;
    scanf("%d %f", &a, &b);
    c = a*(b/1200);
    printf("%.3lf", c);
    return 0;
}