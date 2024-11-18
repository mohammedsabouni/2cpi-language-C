#include <stdio.h>
#include <stdlib.h>

int main()
{
    // taille du tableau :
    int N = 0, Tmp = 0;
    int *T = NULL;
    // int *C = NULL;

    do
    {
        printf("saisir la taille du tableau : ");
        scanf("%d", &N);
    } while (N <= 0);

    T = (int *)calloc(N, sizeof(int));
    // C = (int*)calloc(N ,sizeof(int));

    if ((T == NULL))
    { 
        exit(1);
    }

    // on affecte des valeurs au tableau
    for (int i = 0; i < N; i++)

    {
        printf("valeur %d : ", i + 1);
        scanf("%d", T + i);
    }

    // on inverse les valeurs
    for (int i = 0; i < (N / 2); i++)
    {
        Tmp = *(T + i);
        *(T + i) = *(T + (N - 1) - i);
        *(T + (N - 1) - i) = Tmp;
    }

    // on affiche les deux tableux
    for (int i = 0; i < N; i++)
    {
        printf(" %d ", *(T + i));
        // printf(" C :%d \n", *(C + i));
    }

    free(T);

    return 0;
}