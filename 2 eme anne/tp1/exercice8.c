#include <stdio.h>

 main ()
{
	int longueur=0 ,largeur = 0 , surface=0 ;
	printf ("longueur :");
	scanf ("%d",&longueur);
	printf ("largeur :");
	scanf ("%d",&largeur);
	surface = longueur * largeur ;
	printf ("la surface : %d", surface);
	return 0 ;
}
