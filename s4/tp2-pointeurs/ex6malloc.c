#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int *a = NULL;
    int *b = NULL;
    int *c = NULL;

    printf("Saisir la taille du tableau : ");
    scanf("%d", &N);

    a = (int *)calloc(N, sizeof(int));
    b = (int *)calloc(N, sizeof(int));
    c = (int *)calloc(N, sizeof(int));

    if ((a == NULL) || (b == NULL) || (c == NULL))
    {
        printf("erreur d allocation");
        exit(0);
    }

    for (int i = 0; i < N; i++)
    {
        printf("valeure %d : ", i + 1);
        scanf("%d", (a + i));

        printf("valeure %d  du tableau 2 : ", i + 1);
        scanf("%d", (b + i));

        *(c + i) = (*(b + i) * (*(a + i)));
        printf("a x b = %d \n", *(c + i));
    }

    free(a);
    free(b);
    free(c);

    return 0;
}