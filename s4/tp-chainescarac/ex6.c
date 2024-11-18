#include <stdio.h>
#include <string.h>

int main()
{
    char verb[100];
    char base[100];
    char *ter[] = {"e", "es", "e", "ons", "ez", "ent"};
    int lenght = 0;
    printf("saisir un verbe : \n");
    scanf("%s", verb);
    lenght = strlen(verb);
    // printf("%d", lenght);
    if ((verb[lenght - 1] == 'r') && (verb[lenght - 2] == 'e'))
    {
        strncpy(base, verb, (lenght - 2));
        base[lenght - 2] = '\0';

        strncpy(base, verb, lenght - 2);
        puts(base);
        for (int i = 0; i < 6; i++)
        {
            char conjugue[100];
            strcpy(conjugue, base);
            strcat(conjugue, ter[i]);
            puts(conjugue);
        }
    }
    return 0;
}
