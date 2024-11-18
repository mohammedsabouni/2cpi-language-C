#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float somme = 0, moyenne = 0;
    printf("entrer la taille du tableau ");
    scanf("%d", &N);
    float *T = (float *)calloc(N, sizeof(float));
    if (T == NULL)
    {
        printf("erreur d allocation");
        return 1;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            printf("valeure %d : ", i + 1);
            scanf("%f", T + i);
            somme += *(T + i);
        }
        moyenne = somme / N;
        printf("moyenne : %2.f ", moyenne);

        free(T);
        return 0;
    }
}