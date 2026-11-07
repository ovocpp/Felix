#include<stdio.h>

int main(){
    const double pi = 3.1415926;
    double r, h;
    scanf("%lf %lf", &r, &h);
    double volume = pi * r * r * h;
    double surface_area = 2 * pi * r * (r + h);
    printf("%.4lf,%.4lf", volume, surface_area);
}