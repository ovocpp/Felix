#include <stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);

    for (int i = 1; i <= 3; i++) {          // 三行
        for (int s = 0; s < 3 - i; s++)     // 左边空格：2、1、0
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) // 字母个数：1、3、5
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}