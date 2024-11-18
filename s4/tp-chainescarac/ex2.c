#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *c = malloc(100 * sizeof(char));
    char *v = malloc(100 * sizeof(char));

    if (c == NULL || v == NULL)
    {
        printf("erreur");
        return 0;
    }
    else
    {
        // lire les deux chaines:
        printf("chaine 1 : \n");
        scanf("%s", c);
        printf("chaine 2 : \n");
        scanf("%s", v);

        // printf("%s \n%s", c, v);

        // comparaison
        if (*(c + 0) > *(v + 0))
        {
            printf("le plus petit est : %c", *(v + 0));
        }
        else if (*(c + 0) < *(v + 0))
        {
            printf("le plus petit est : %c", *(c + 0));
        }
        else
        {
            printf("les deux premiers carac sont identiques");
        }
        return 0;
    }
}
