#include <stdio.h>
#include <stdlib.h>

void crypter(char *message, int decalage);
void decrypter(char *message, int decalage);

int main()
{
    int decalage = 0;
    char *message = calloc(100, sizeof(char));
    if (message == NULL)
    {
        printf("echec d'allocation");
        return 1;
    }
    else
    {
        printf("entrer message : \n");
        fgets(message, 100, stdin);
        printf("saisir le decalage : \n");
        scanf("%d", &decalage);
        crypter(message, decalage);
        printf("message cryptee : \n");
        puts(message);
        decrypter(message, decalage);
        printf("message decryptee : \n");
        puts(message);
        free(message);
        return 0;
    }
}

void crypter(char *message, int decalage)
{
    int i;
    for (i = 0; message[i] != '\0'; i++)
    {
        if ((int)message[i] >= 65 && (int)message[i] <= 90)
        {
            message[i] = (char)(((int)message[i] - 65 + decalage) % 26 + 65);
        }
        else if ((int)message[i] >= 97 && (int)message[i] <= 122)
        {
            message[i] = (char)(((int)message[i] - 97 + decalage) % 26 + 97);
        }
    }
}

void decrypter(char *message, int decalage)
{
    crypter(message, -decalage);
}