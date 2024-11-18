#include <stdio.h>

int main ()
{
    int T , j , h , m , s ;
    printf( "saisir le temps en secondes ");
    scanf ("%d",&T) ;

    j = T / 86400 ;
    T = T % 86400 ;
    h = T / 3600 ;
    T = T % 3600 ;
    m = T / 60 ;
    T = T % 60 ; 
    s = T ;
    printf ("%d jours , %d heures , %d min et %d s ", j,h,m,s) ; 
}
