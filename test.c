#include"stdio.h"

int main()
{
    int cm=0;
    scanf("%d",&cm);

    int foot=cm/30.48;
    int inch=(cm-foot*30.48)/2.54;

    printf("Foot: %d\n", foot);
    printf("Inch: %d\n", inch);

    return 0;
}   