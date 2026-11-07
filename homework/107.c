#include<stdio.h>

int main(){
    int v;
    float a;
    double length;
    scanf("%f %d", &a, &v);
    length = v*v/(2*a);
    printf("%.2lf", length);
    return 0;
    

}