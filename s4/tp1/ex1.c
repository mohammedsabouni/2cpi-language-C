#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float M, S;

    printf("entrer le nombre de valeurs ");
    scanf("%d", &N);

    float *T = calloc(N, sizeof(float));
    if (T == NULL)
    {
        printf("La memmoire n'est pas allouer \n");
        exit(0);
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            printf("Note %d :", i + 1);
            scanf("%f", (T + i));
        }

        for (int i = 0; i < N; i++)
        {
            S += *(T + i);
        }

        M = S / N;

        printf("la moyenne est : %.2f", M);
        free(T);
    }

    return 0;
}