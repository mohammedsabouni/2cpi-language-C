#include <stdio.h>
int main() 
{ 
float x, y, z,w; 
printf ("donner un entier : \n") ; 
scanf("%f",&x) ; 
printf ("donner un deuxième entier : \n") ; 
scanf("%f",&y) ; 
z = x/y ; 
printf("%f / %f= %f",x,y,z); 
w = x % y;
printf("%f\n",w);
return 0 ;
}
 
