#include <stdio.h>

int main ()
{
    int T[5];
    int max ;
    int *p = T;
    
    for (int i = 0; i < 5; i++)
    {
        printf("valeur %d : ",i+1);
        scanf("%d",p + i);
    }

    max = T[0];

    for (int i = 0; i < 5; i++)
    {
        if (max < *(p + i))
        {
            (max = (*p + i));
        }
    }
    
    printf("le max est : %d",max);
    
}