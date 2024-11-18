#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    int X = 0;
    int *T = NULL;

    printf("saisir le nombre de valeurs : \n");
    scanf("%d", &N);

    T = (int *)calloc(N, sizeof(int));
    if (T == NULL)
    {
        printf("erreur de memoire");
        return 1;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            printf("valeure %d : ", i + 1);
            scanf("%d", (T + i));
        }

        printf("saisir le nombre de valeurs a ajouter : ");
        scanf("%d", &X);

        int *P = (int *)realloc(T, (N + X) * sizeof(int));
        if (T == NULL)
        {
            printf("erreur ");
            return 0;
        }
        else
        {
            for (int i = N; i < N + X; i++)
            {
                scanf("%d", (P + i));
            }

            for (int i = 0; i < N + X; i++)
            {
                printf("%d  ", *(P + i));
            }

            return 0;
        }
    }
}