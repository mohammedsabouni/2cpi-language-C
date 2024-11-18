#include <stdio.h>

int main ()
{
    int T[5];
    int C[5];
    int multiplication[5];

    for (int i = 0; i < 5; i++)
    {
        printf("valeure %d : ", i + 1);
        scanf("%d", (T + i));

        printf("valeure %d  du tableau 2 : ", i + 1);
        scanf("%d", (C + i));

        *(multiplication + i) = (*(T + i) * *(C + i));
        printf("%d x %d = %d \n",*(T + i),*(C + i),*(multiplication + i) );     
    }
    
    return 0;
}