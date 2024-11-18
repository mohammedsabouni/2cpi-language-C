#include <stdio.h>

int main()
{
    int i = 0;
    float note, somme = 0, moyenne;
    do
    {
        printf("note %d : ", i + 1);
        scanf("%f", &note);
        if (note >= 0)
        {
            somme += note;
        }
        i++;
    } while (note >= 0);

    moyenne = somme / (i - 1);

    if (moyenne < 0)
    {
        printf("aucune note");
    }
    else
    {
        printf("la moyenne de ces %d notes est %.2f", i - 1, moyenne);
    }

    return 0;
}