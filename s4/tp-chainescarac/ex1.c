#include <stdio.h>

int main()
{
    char c;
    printf("saisissez un caractere : \n ");
    scanf("%c", &c);
    printf("caractere : %c , ASCII : %d", c, c);
    return 0;
}