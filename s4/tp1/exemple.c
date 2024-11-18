#include <stdio.h>
 int main()
{
    int b = 12, a = 12;
    int *i = &b;
    int *j = &a;
    printf ("%d \n", *i**j);
    printf ("%d \n", *i / *j);
}