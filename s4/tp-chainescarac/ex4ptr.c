#include <stdio.h>

int main()
{
    char(*phrase)[200];
    char tableau[200][200];
    int i = 0, j = 0, k = 0;

    printf("saisir une phrase \n");
    fgets(phrase, 200, stdin);

    while (phrase[i] != '\0')
    {
        if (phrase[i] != ' ')
        {
            tableau[k][j] = phrase[i];
            j++;
        }
        else
        {
            tableau[k][j] = '\0';
            k++;
            j = 0;
        }

        i++;
    }

    for (int n = 0; n <= k; n++)
    {
        printf("mot %d : %s \n", n + 1, tableau[n]);
    }
    return 0;
}