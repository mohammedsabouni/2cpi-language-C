#include<stdio.h>

int main()
{
    int T[10];
    int *p;
    for (p = T ; p < T + 10 ; p++)
    {
        *p = 1 ;
        printf("%d",*p); 
    }
}