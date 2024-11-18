#include <stdio.h>

int main()
{
    int x , y, tmp;
    int *p1 = &x , *p2 = &y;
    printf("saisir la premiere valeure : ");
    scanf("%d", &x);
    printf("saisir la deusiemme valeure : ");
    scanf("%d", &y);

    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;

    printf ("x : %d , y : %d\n", x, y);

}