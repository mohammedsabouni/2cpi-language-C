#include <stdio.h>
#include <stdlib.h>

void remplir(int *tab, int taille);
void afficher(int *tab, int taille);
void doubler(int *tab, int taille);
int somme(int *tab, int taille);
int main()
{
    int taille = 0;
    printf("entrer taille : \n");
    scanf("%d", &taille);
    int *tab = (int *)calloc(taille, sizeof(int));
    if (tab != NULL)
    {
        remplir(tab, taille);
        afficher(tab, taille);
        doubler(tab, taille);
        printf("double : \n");
        afficher(tab, taille);
        printf("somme : %d \n", somme(tab, taille));
        free(tab);
    }
    else
        return printf("echec d'allocation");
}

void remplir(int *tab, int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        int value;
        printf("entrer valeur %d : \n", i + 1);
        scanf("%d", &value);
        *(tab + i) = value;
    }
}

void afficher(int *tab, int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        printf("%d ", *(tab + i));
    }
    printf("\n");
}

void doubler(int *tab, int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        *(tab + i) = *(tab + i) * 2;
    }
}

int somme(int *tab, int taille)
{
    int i;
    int somme = 0;
    for (i = 0; i < taille; i++)
    {
        somme = somme + *(tab + i);
    }
    return somme;
}