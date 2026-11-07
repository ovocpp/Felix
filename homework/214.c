#include <stdio.h>

int main(void) {
    int year, month;
    int leap;

    scanf("%d%d", &year, &month);

    leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (leap)
        printf("Leap year,");
    else
        printf("Common year,");

    if (month >= 3 && month <= 5)
        printf("Spring\n");
    else if (month >= 6 && month <= 8)
        printf("Summer\n");
    else if (month >= 9 && month <= 11)
        printf("Fall\n");
    else
        printf("Winter\n");

    return 0;
}