#include <stdio.h>

int main(){
    int heads = 30, feet = 90;
    int rabbit = (feet - 2 * heads) / 2;
    int chicken = heads - rabbit;

    printf("%d,%d\n", chicken, rabbit);
    return 0;
}