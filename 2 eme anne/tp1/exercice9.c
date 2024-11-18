#include <math.h>
 #include <stdio.h>
int main ()
{
int XA =00 , YA = 00 , XB = 00 , YB = 00 ;
float D=0 , X=0 , Y=0 ;


printf("XA:");
scanf ("%d",&XA);
printf("XB :");
scanf ("%d",&XB);
printf("YA :");
scanf ("%d",&YA);
printf("YB :");
scanf ("%d",&YB);

X = XA-XB ;
Y = YA-YB ;

D = sqrt(pow(X,2)+pow(Y,2) ) ;
printf ("%f",D);

return 0 ;
}
