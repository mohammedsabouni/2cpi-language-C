#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille;
    int maximum, minimum, position_maximum = 0, position_minimum = 0;
    printf("entrer la taille du tableau:");
    scanf("%d", &taille);

    if (taille == 0)
    {
        printf("tableau est vide.\n");
        scanf("%d", &taille);
    }

    int *T = malloc(taille * sizeof(int));
    if (T == NULL)
    {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }

    for (int i = 0; i < taille; i++)
    {
        printf("valeur %d : ", i + 1);
        scanf("%d", &T[i]);
    }

    maximum = T[0];
    minimum = T[0];

    for (int i = 0; i < taille; i++)
    {
        if (T[i] > maximum)
        {
            maximum = T[i];
            position_maximum = i;
        }
        if (T[i] < minimum)
        {
            minimum = T[i];
            position_minimum = i;
        }
    }

    printf("max : %d , min : %d , posmax : %d , posmin : %d ", maximum, minimum, position_maximum, position_minimum);

    free(T);
}
