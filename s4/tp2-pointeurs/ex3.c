#include <stdio.h>

int main ()
{
    int T[5];
    int somme = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("valeure %d : ",i+1);
        scanf("%d",T+i);
        somme += *(T + i);
    }
    printf("la somme est : %d", somme);
    return 0;
    
}