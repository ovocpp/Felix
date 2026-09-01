#include<stdio.h>

int main()
{
    int a=7;
    int b=5;
    int c;

    c=a;
    a=b;
    b=c;

    printf("a=%d,b=%d\n",a,b);

    return 0;


}