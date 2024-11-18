#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0, M = 0, P = 0;

    printf("saisir les dimentions de la matrice A: ");
    scanf("%d %d", &N, &M);
    printf("saisir les dimentions de la matrice B: ");
    scanf("%d", &P);

    int *A = (int *)(calloc((N * M), (sizeof(int))));
    int *B = (int *)(calloc((P * M), (sizeof(int))));
    int *C = (int *)(calloc((N * P), (sizeof(int))));

    if (A == NULL || B == NULL || C == NULL)
    {
        printf("erreur d allocation");
        return 1;
    }

    for (int i = 0; i < N * M; i++)
    {
        printf("valeure %d du tableau A : ", i + 1);
        scanf("%d", A + i);
    }

    for (int i = 0; i < P * M; i++)
    {
        printf("valeure %d du tableau B : ", i + 1);
        scanf("%d", B + i);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            int somme = 0;
            for (int k = 0; k < M; k++)
            {
                somme += (*(A + (i * M) + k) * *(B + (k * P) + j));
            }
            *(C + (i * P) + j) = somme;
        }
    }

    printf("Le resultat de la multiplication est \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            printf("%d ", *(C + (i * P) + j));
        }
        printf("\n");
    }

    free(A);
    free(B);
    free(C);

    return 0;
}