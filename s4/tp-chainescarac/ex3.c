#include <stdio.h>
#include <string.h>
int main()
{
    char tableau[5][20];
    for (int i = 0; i < 5; i++)
    {
        printf("mot %d : \n", i + 1);
        // fgets(tableau[i], 20, stdin);
        scanf("%s", (tableau + i));
    }
    for (int i = 0; i < 5; i++)
    {
        strrev((char *)(tableau + i));
        printf("reversed : %s \n", (tableau + i));
    }

    return 0;
}