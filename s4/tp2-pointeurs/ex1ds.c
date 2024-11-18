#include <stdio.h>

int main()
{
    int a = 1, b = a++, c = --b + 1, *p1 = &a, *p2 = &b;
    printf("a = %d, b = %d, c = %d, *p1 = %d, *p2 = %d \n", a, b, c, *p1, *p2);

    *p1 = (*p2)++ + 2;
    printf("a = %d, b = %d, c = %d, *p1 = %d, *p2 = %d \n", a, b, c, *p1, *p2);

    p1 = p2;
    printf("a = %d, b = %d, c = %d, *p1 = %d, *p2 = %d \n", a, b, c, *p1, *p2);

    p2 = &c;
    printf("a = %d, b = %d, c = %d, *p1 = %d, *p2 = %d \n", a, b, c, *p1, *p2);

    *p1 -= (*p2)++;
    printf("a = %d, b = %d, c = %d, *p1 = %d, *p2 = %d \n", a, b, c, *p1, *p2);

    ++*p2;
    printf("a = %d, b = %d, c = %d, *p1 = %d, *p2 = %d \n", a, b, c, *p1, *p2);

    return 0;
}