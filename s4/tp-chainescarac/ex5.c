#include <stdio.h>
#include <string.h>

int main()
{
    char A[] = "bonjour";
    char B[] = "amine";
    char C[100] = {0};
    int result = 0;

    result = strcmp(A, B);

    if (result < 0)
    {
        strcpy(C, A);
        strcat(C, B);
        printf("%s", C);
    }
    else if (result == 0)
    {
        strcpy(C, A);
        strcat(C, B);
        printf("%s", C);
    }
    else
    {
        strcpy(C, B);
        strcat(C, A);
        printf("%s", C);
    }

    return 0;
}