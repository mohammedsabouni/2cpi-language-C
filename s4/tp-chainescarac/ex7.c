#include <stdio.h>
#include <string.h>

int main()
{
    char mot[50];
    int length = 0;

    printf("saisir un mot : ");
    fgets(mot, sizeof(mot), stdin);

    // Remove newline character if present
    mot[strcspn(mot, "\n")] = 0;

    puts(mot);

    length = strlen(mot);

    for (int i = 0; i < length / 2; i++)
    {
        if (mot[i] != mot[length - 1 - i])
        {
            printf("le mot n'est pas palindrome");
            return 0;
        }
    }
    
    printf("le mot est palindrome");
    return 0;
}
